/*
 * =====================================================================================
 * Nome do Arquivo: jogo.h
 * Autor: Raissa Cavalcanti
 * Data de Criação: 08/11/2024
 *
 * Descrição:
 * 
 * Criação das Classes: Usuário e jogo, além da estrutuação do jogador
 * 
 * =====================================================================================
 */

#ifndef JOGO_H
#define JOGO_H

#include "pokemon.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <map> 
#include <algorithm> 

enum Dificuldade { Facil, Medio, Dificil };

// Armazenar as informações um jogador
struct Jogador {
    int pontuacao = 0;
    int vitorias = 0;
    int derrotas = 0;
    Jogador() = default;
    Jogador(int p, int v, int d) : pontuacao(p), vitorias(v), derrotas(d) {}
};

// Representar um jogador dentro do jogo
class Usuario {
private:
    std::string nickname;
    int pontuacao;
    int vitorias;
    int derrotas;

public:
    // Representação
    Usuario(const std::string &nome, int pontuacaoInicial = 0, int vitoriasIniciais = 0, int derrotasIniciais = 0) 
        : nickname(nome), pontuacao(pontuacaoInicial), vitorias(vitoriasIniciais), derrotas(derrotasIniciais) {}

    // Metodos de acesso 
    void setPontuacao(int novaPontuacao) { pontuacao = novaPontuacao; }
    int getPontuacao() const { return pontuacao; }
    std::string getNickname() const { return nickname; }
    // Incrementar vitorias e derrotas
    void incrementarVitorias() { vitorias++; }
    void incrementarDerrotas() { derrotas++; }
    int getVitorias() const { return vitorias; }
    int getDerrotas() const { return derrotas; }
    // Salvar e carregar o usuário de/para um arquivo
    void salvar(std::ofstream &arquivo) const {
        arquivo << nickname << " " << pontuacao << " " << vitorias << " " << derrotas << std::endl;
    }

    static Usuario carregar(std::ifstream &arquivo) {
    std::string nome;
    int pontuacao, vitorias, derrotas;
    arquivo >> nome >> pontuacao >> vitorias >> derrotas;

    std::transform(nome.begin(), nome.end(), nome.begin(), ::tolower);

    return Usuario(nome, pontuacao, vitorias, derrotas);
}
};

// Gerenciar o ciclo do jogo
class Jogo {
    int pontuacao = 0;  
public:
    Jogo(const std::string& nickname);

    void iniciarBatalha();
    void atualizarRanking(const std::string& jogador, int pontuacao, bool vitoria);
    void exibirMenu(); // Interações com a interface do usuário
    void selecionarDificuldade();
    void exibirRanking();
    void salvarRanking(const std::string& caminhoArquivo);
    void carregarRanking();
    void salvarPontuacaoUsuario(const std::string& nickname);  // Método para salvar a pontuação e os dados do usuário
    void carregarOuCriarUsuario(const std::string& nickname);

private:
    std::string nickname;
    void escolherPokemonInicial();
    Usuario usuarioJogador; // Objeto da classe usuário que contém os dados do jogador

    // Iniciar e Controlhar Batalhas
    void escolherNovoPokemon(); 
    void executarTurnoJogador();
    void executarTurnoCPU();
    void executarAtaque(Pokemon& atacante, Pokemon& defensor); 
    const Ataque& escolherAtaqueCPU(const Pokemon& cpuPokemon); 

    // flags
    bool jogadorVenceuUltimaBatalha = false; // Indica se o jogador venceu a ultima batalha
    bool batalhaEmAndamento = false; // Indica se a batalha está em andamento


    std::map<std::string, Jogador> ranking; // Mapa de jogadores e suas respectivas pontuações
    std::vector<Pokemon> jogadorPokemons; // Vetor contendo os pokemons do jogador
    std::vector<Pokemon> cpuPokemons; // Vetor contendo os pokemons da CPU
    Dificuldade dificuldade = Facil; 
};

#endif