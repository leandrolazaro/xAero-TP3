#ifndef ITEM_MATRIZ_H
#define ITEM_MATRIZ_H

#include "LISTA_DE_VOOS.h"
#include "../TAD_AUXILIAR/horario.h"

typedef struct{
    LISTA_DE_VOOS item;
    int numVoos;
    horario ultimaAtualizacao;
} ITEM_MATRIZ;

// Inicializa o TAD ITEM_MATRIZ
int ITEM_MATRIZ_inicializa(ITEM_MATRIZ *ponteiro);

//Define os valores do TAD ITEM_MATRIZ
int ITEM_MATRIZ_setItemMatriz(ITEM_MATRIZ *ponteiro, LISTA_DE_VOOS *item, horario *ultimaAtualizacao);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_setUltimaAtualizacao(ITEM_MATRIZ *ponteiro);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_setHorarioDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid, horario *horario);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_setHorarioPouso(ITEM_MATRIZ *ponteiro, unsigned int vid, horario *horario);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_setAeroportoDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid, char *aeroporto);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_setAeroportoPouso(ITEM_MATRIZ *ponteiro, unsigned int vid, char *aeroporto);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_setIdentificadorPistaDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid, unsigned int identificador);

/* Definindo o protótipo das funções get. Retornam o dado caso seja de um tipo
   primitivo, retorna void e permite entrar com um ponteiro para armazenar o
   dado, caso não seja de um tipo primitivo */
unsigned int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_getVID(ITEM_MATRIZ *ponteiro);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_getHorarioDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid, horario *horario);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_getHorarioPouso(ITEM_MATRIZ *ponteiro, unsigned int vid, horario *horario);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_getAeroportoDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid, char *aeroporto);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_getAeroportoPouso(ITEM_MATRIZ *ponteiro, unsigned int vid, char *aeroporto);
int ITEM_MATRIZ_LISTA_DE_VOOS_VOO_getIdentificadorPistaDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid);


void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showVID(ITEM_MATRIZ *ponteiro);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showHorarioDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showHorarioPouso(ITEM_MATRIZ *ponteiro, unsigned int vid);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showAeroportoDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showAeroportoPouso(ITEM_MATRIZ *ponteiro, unsigned int vid);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showIdentificadorPistaDecolagem(ITEM_MATRIZ *ponteiro, unsigned int vid);
void ITEM_MATRIZ_LISTA_DE_VOOS_VOO_showVoo(ITEM_MATRIZ *ponteiro, unsigned int vid);

#endif 
