/*
 * =====================================================================================
 * Nome do Arquivo: utils.h
 * Autor: Raissa Cavalcanti
 * Data de Criação: 06/11/2024
 *
 * Descrição:
 * 
 * Declarações de funções e tipos que são utilizados para manipular objetos relacionados
 * aos Pokémons e seus ataques.
 * =====================================================================================
 */


#ifndef UTILS_H
#define UTILS_H

#include "pokemon.h"
#include <vector>

void carregarPokemons(std::vector<Pokemon>& pokemons, int quantidade = 3); // Número de pokémons a serem carregados
void carregarAtaques(std::vector<Ataque>& ataques, Pokemon& pokemon);
float calcularDano(const Pokemon& atacante, const Ataque& ataque, const Pokemon& defensor);
bool ataqueBemSucedido(const Ataque& ataque);

#endif
