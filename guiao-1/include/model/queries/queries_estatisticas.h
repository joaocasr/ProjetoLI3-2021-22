#ifndef GRUPO11_QUERIES_ESTATISTICAS_H
#define GRUPO11_QUERIES_ESTATISTICAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../../include/model/sgr/sgr.h"
#include "../../../include/model/file_work_aux.h"

/**
 * Função que apresenta a quantidade de cada tipo de utilizador (Bots, Organizações e Utilizadores)
 * Tem como ID 1.
 * @param indice O indice do ficheiro no qual vai ser impresso o resultado da query
 * @param sgr O tipo de dados que contém todos os catálogos
 */
void query1(int indice, SGR sgr);

/**
 * Função que apresenta o número médio de colaboradores por repositório
 * @param indice O indice do ficheiro no qual vai ser impresso o resultado da query
 * @param sgr O tipo de dados que contém todos os catálogos
 */
void query2(int indice, SGR sgr);

/**
 * Função que apresenta a quantidade de repositórios com bots
 * @param indice O indice do ficheiro no qual vai ser impresso o resultado da query
 * @param sgr O tipo de dados que contém todos os catálogos
 */
void query3(int indice, SGR sgr);

/**
 * Função que apresenta a quantidade média de commits por utilizador
 * @param indice O indice do ficheiro no qual vai ser impresso o resultado da query
 * @param sgr O tipo de dados que contém todos os catálogos
 */
void query4(int indice, SGR sgr);

#endif //GRUPO11_QUERIES_ESTATISTICAS_H
