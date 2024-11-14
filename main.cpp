/*
 * =====================================================================================
 * Nome do Arquivo: main.cpp
 * Autor: Raissa Cavalcanti
 * Data de Criação: 09/11/2024
 * =====================================================================================
 */

#include "jogo.h"
#include <iostream>

int main() {
    std::string nickname; // Solicita ao jogador um nome para ser usado durante a partida
    std::cout << "Digite seu nickname: ";
    std::cin >> nickname;

    Jogo jogo(nickname);  // Cria um obketo da classe jogo. O construtor da classe irá inicializar o jogo
    jogo.exibirMenu(); // Chama a função que exibe o menu de opções para o jogador

    return 0;
}
