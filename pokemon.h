/*
 * =====================================================================================
 * Nome do Arquivo: pokemon.h
 * Autor: Raissa Cavalcanti
 * Data de Criação: 07/11/2024
 *
 * Descrição:
 * 
 * Definição das classes: Ataque e Pokemon, usadas para representar Pokémon e os ataques
 * que eles podem usar durante uma batalha
 * =====================================================================================
 */

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>

// Responsável por amazenar as informações de cada ataque disponível
class Ataque {
public:
    std::string nome;
    std::string categoria;
    int poder;
    float precisao;
    std::string tipo;
    // Construtor que inicializa os atributos da classe a partir dos valors passados como parametro
    Ataque(const std::string& nome, const std::string& categoria, int poder, float precisao, const std::string& tipo);
};

// Responsável por armazenar as informações do Pokémon e seus ataques.
class Pokemon {
public:
    std::string nome;
    std::string tipo1;
    std::string tipo2;
    int hp;
    int nivel;
    int ataque;
    int defesa;
    int velocidade;
    int ataqueEspecial;
    int defesaEspecial;
    std::vector<Ataque> ataques; // armazena os ataques que o pokemon pode usar
    // Construtor que inicializa os atributos do pokemon 
    Pokemon(const std::string& nome, const std::string& tipo1, const std::string& tipo2, int hp, int nivel, int ataque, int defesa,
            int velocidade, int ataqueEspecial, int defesaEspecial);
    void adicionarAtaque(const Ataque& ataque); // adicionar um ataque ao vetor ataques
};

#endif