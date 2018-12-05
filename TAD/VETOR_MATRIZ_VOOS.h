#ifndef VETOR_MATRIZ_VOOS_H
#define VETOR_MATRIZ_VOOS_H

#include <stdio.h>
#include <stdlib.h>
#include "MATRIZ_VOOS.h"
#include "ITEM_MATRIZ.h"
#include "VOO.h"

typedef struct{
    MATRIZ_VOOS *vetorBubbleSort;
    MATRIZ_VOOS *vetorSelectionSort;
    MATRIZ_VOOS *vetorInsertionSort;
    MATRIZ_VOOS *vetorShellSort;
    MATRIZ_VOOS *vetorQuickSort;
    MATRIZ_VOOS *vetorHeapSort;
    //int *indicesSorteados;
    int numElementos;
}VETOR_MATRIZ_VOOS;

//Gera um vetor preenchido aleatpriamente
int VETOR_MATRIZ_VOOS_setCenarioAleatorio(VETOR_MATRIZ_VOOS *vetor, int numMatrizes, int numVoos, int n);
//Gera um vetor preencido com os dados de um arquivo
int VETOR_MATRIZ_VOOS_setCenarioArquivo(VETOR_MATRIZ_VOOS *vetor, FILE *arquivo);

int VETOR_MATRIZ_VOOS_bubbleSort(VETOR_MATRIZ_VOOS *vetor);
int VETOR_MATRIZ_VOOS_selectionSort(VETOR_MATRIZ_VOOS *vetor);
int VETOR_MATRIZ_VOOS_insertionSort(VETOR_MATRIZ_VOOS *vetor);
int VETOR_MATRIZ_VOOS_shellSort(VETOR_MATRIZ_VOOS *vetor);
int VETOR_MATRIZ_VOOS_quickSort(VETOR_MATRIZ_VOOS *vetor);
int VETOR_MATRIZ_VOOS_heapSort(VETOR_MATRIZ_VOOS *vetor);

int VETOR_MATRIZ_VOOS_setNumElementos(VETOR_MATRIZ_VOOS *vetor, int n);
int VETOR_MATRIZ_VOOS_getNumElementos(VETOR_MATRIZ_VOOS *vetor, int *n);

void bubbleSort(MATRIZ_VOOS *vetor, int count);

int selectionSort(MATRIZ_VOOS *vetor, int n);

void swapInsertionSort(MATRIZ_VOOS *vetor, int index1, int index2);

void insertionSort (MATRIZ_VOOS *vetor, int count);

void swapShellSort(MATRIZ_VOOS *vetor, int i, int j);

void shellSort(MATRIZ_VOOS *vetor, int size);

void particaoQuickSort(int Esq, int Dir,int *i, int *j, MATRIZ_VOOS *vetor);

void ordenaQuickSort(int Esq, int Dir, MATRIZ_VOOS *vetor);

void quickSort(MATRIZ_VOOS *vetor, int n);

void rebuildHeapSort(MATRIZ_VOOS *vetor, int limit, int pos);

void buildHeapSort(MATRIZ_VOOS *vetor, int size_v);

void heapSort(MATRIZ_VOOS *vetor, int size_v);

#endif