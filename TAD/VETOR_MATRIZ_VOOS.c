#include "VETOR_MATRIZ_VOOS.h"
#include "ITEM_MATRIZ.h"
#include "MATRIZ_VOOS.h"
#include "VOO.h"
#include "LISTA_DE_VOOS.h"
#include <stdlib.h>
#include <stdio.h>
#include "../TAD_AUXILIAR/horario.h"
#include <time.h>


int VETOR_MATRIZ_VOOS_setCenarioAleatorio(VETOR_MATRIZ_VOOS *vetor, int numMatrizes, int numVoos, int n){

	vetor->vetorBubbleSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorSelectionSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorInsertionSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorShellSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorQuickSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorHeapSort=malloc(n*sizeof(MATRIZ_VOOS));
    //vetor->indicesSorteados=malloc(n*sizeof(int));
    vetor->numElementos=n;

	int count=0;

    for(int i=0; i<n; i++){
		
        MATRIZ_VOOS_inicializa(&(vetor->vetorBubbleSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorSelectionSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorInsertionSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorShellSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorQuickSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorHeapSort[i]));
        // printf("/////////// %d ///////////////", vetor->vetorOriginal[i].IDMatrizVoos);
        if(count<numMatrizes){
            for(int j=0; j<numVoos; j++){

                horario *horarioDecolagem=malloc(sizeof(horario));
				horarioDecolagem->hora=12;
                horarioDecolagem->min=24;

				horario *horarioPouso=malloc(sizeof(horario));
				horarioPouso->hora=13;
                horarioPouso->min=25;

                int idpd=7;
				
                char pistaDecolagem[30]="Sobe";
                char pistaPouso[30]="Desce";

                VOO *vooBubbleSort=malloc(sizeof(VOO));
				VOO *vooSelectionSort=malloc(sizeof(VOO));
				VOO *vooInsertionSort=malloc(sizeof(VOO));
				VOO *vooShellSort=malloc(sizeof(VOO));
				VOO *vooQuickSort=malloc(sizeof(VOO));
				VOO *vooHeapSort=malloc(sizeof(VOO));

                VOO_inicializa(vooBubbleSort);
				VOO_inicializa(vooSelectionSort);
				VOO_inicializa(vooInsertionSort);
				VOO_inicializa(vooShellSort);
				VOO_inicializa(vooQuickSort);
				VOO_inicializa(vooHeapSort);

                VOO_setHorarioDecolagem(vooBubbleSort, horarioDecolagem);
                VOO_setHorarioPouso(vooBubbleSort, horarioPouso);

				VOO_setHorarioDecolagem(vooSelectionSort, horarioDecolagem);
                VOO_setHorarioPouso(vooSelectionSort, horarioPouso);

				VOO_setHorarioDecolagem(vooInsertionSort, horarioDecolagem);
                VOO_setHorarioPouso(vooInsertionSort, horarioPouso);

				VOO_setHorarioDecolagem(vooShellSort, horarioDecolagem);
                VOO_setHorarioPouso(vooShellSort, horarioPouso);

				VOO_setHorarioDecolagem(vooQuickSort, horarioDecolagem);
                VOO_setHorarioPouso(vooQuickSort, horarioPouso);

				VOO_setHorarioDecolagem(vooHeapSort, horarioDecolagem);
                VOO_setHorarioPouso(vooHeapSort, horarioPouso);

                VOO_setIdentificadorPistaDecolagem(vooBubbleSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooSelectionSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooInsertionSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooShellSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooQuickSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooHeapSort, idpd);

				VOO_setAeroportoDecolagem(vooBubbleSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooBubbleSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooSelectionSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooSelectionSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooInsertionSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooInsertionSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooShellSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooShellSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooQuickSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooQuickSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooHeapSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooHeapSort, pistaPouso);

                //VOO_showVoo(voo);
                MATRIZ_VOOS_setVoo(&(vetor->vetorBubbleSort[i]), vooBubbleSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorSelectionSort[i]), vooSelectionSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorInsertionSort[i]), vooInsertionSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorShellSort[i]), vooShellSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorQuickSort[i]), vooQuickSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorHeapSort[i]), vooHeapSort);
				
            }
            count++;
        }
    }

    return 0;
}
int VETOR_MATRIZ_VOOS_setCenarioArquivo(VETOR_MATRIZ_VOOS *vetor, FILE *arquivo, int n, int numMatrizes, int numVoos){

	vetor->vetorBubbleSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorSelectionSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorInsertionSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorShellSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorQuickSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->vetorHeapSort=malloc(n*sizeof(MATRIZ_VOOS));
	vetor->numElementos=n;

	char opcaoArquivo;

	for(int i=0; i<numMatrizes; i++){
		do{
			fscanf(arquivo,"%c", &opcaoArquivo);
			printf("%c", opcaoArquivo);
		}while(opcaoArquivo!='\n');
	}

	// horario *horarioDecolagem=malloc(sizeof(horario));
	// horario *horarioPouso=malloc(sizeof(horario));

	// int idpd=7;
	
	// char pistaDecolagem[30];
	// char pistaPouso[30];

	// fscanf(arquivo, "%d:%d %d:%d %s %s %d", &(horarioDecolagem->hora), &(horarioDecolagem->min), &(horarioPouso->hora), &(horarioPouso->min), pistaDecolagem, pistaPouso, &idpd);

	// printf("%d:%d %d:%d %s %s %d", horarioDecolagem->hora, horarioDecolagem->min, horarioPouso->hora, horarioPouso->min, pistaDecolagem, pistaPouso, idpd);

	// fscanf(arquivo, "%d:%d %d:%d %s %s %d", &(horarioDecolagem->hora), &(horarioDecolagem->min), &(horarioPouso->hora), &(horarioPouso->min), pistaDecolagem, pistaPouso, &idpd);

	// printf("%d:%d %d:%d %s %s %d", horarioDecolagem->hora, horarioDecolagem->min, horarioPouso->hora, horarioPouso->min, pistaDecolagem, pistaPouso, idpd);

	int count=0;

	for(int i=0; i<n; i++){
		
        MATRIZ_VOOS_inicializa(&(vetor->vetorBubbleSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorSelectionSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorInsertionSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorShellSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorQuickSort[i]));
		MATRIZ_VOOS_inicializa(&(vetor->vetorHeapSort[i]));
        // printf("/////////// %d ///////////////", vetor->vetorOriginal[i].IDMatrizVoos);
        if(count<numMatrizes){
            for(int j=0; j<numVoos; j++){

                horario *horarioDecolagem=malloc(sizeof(horario));
				horario *horarioPouso=malloc(sizeof(horario));

				int idpd=7;

				char pistaDecolagem[30];
				char pistaPouso[30];

				fscanf(arquivo, "%d:%d %d:%d %s %s %d", &(horarioDecolagem->hora), &(horarioDecolagem->min), &(horarioPouso->hora), &(horarioPouso->min), pistaDecolagem, pistaPouso, &idpd);

				//printf("----------------%d--------------\n", (count*j));

				//printf("%d:%d %d:%d %s %s %d\n", horarioDecolagem->hora, horarioDecolagem->min, horarioPouso->hora, horarioPouso->min, pistaDecolagem, pistaPouso, idpd);

                VOO *vooBubbleSort=malloc(sizeof(VOO));
				VOO *vooSelectionSort=malloc(sizeof(VOO));
				VOO *vooInsertionSort=malloc(sizeof(VOO));
				VOO *vooShellSort=malloc(sizeof(VOO));
				VOO *vooQuickSort=malloc(sizeof(VOO));
				VOO *vooHeapSort=malloc(sizeof(VOO));

                VOO_inicializa(vooBubbleSort);
				VOO_inicializa(vooSelectionSort);
				VOO_inicializa(vooInsertionSort);
				VOO_inicializa(vooShellSort);
				VOO_inicializa(vooQuickSort);
				VOO_inicializa(vooHeapSort);

                VOO_setHorarioDecolagem(vooBubbleSort, horarioDecolagem);
                VOO_setHorarioPouso(vooBubbleSort, horarioPouso);

				VOO_setHorarioDecolagem(vooSelectionSort, horarioDecolagem);
                VOO_setHorarioPouso(vooSelectionSort, horarioPouso);

				VOO_setHorarioDecolagem(vooInsertionSort, horarioDecolagem);
                VOO_setHorarioPouso(vooInsertionSort, horarioPouso);

				VOO_setHorarioDecolagem(vooShellSort, horarioDecolagem);
                VOO_setHorarioPouso(vooShellSort, horarioPouso);

				VOO_setHorarioDecolagem(vooQuickSort, horarioDecolagem);
                VOO_setHorarioPouso(vooQuickSort, horarioPouso);

				VOO_setHorarioDecolagem(vooHeapSort, horarioDecolagem);
                VOO_setHorarioPouso(vooHeapSort, horarioPouso);

                VOO_setIdentificadorPistaDecolagem(vooBubbleSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooSelectionSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooInsertionSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooShellSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooQuickSort, idpd);
				VOO_setIdentificadorPistaDecolagem(vooHeapSort, idpd);

				VOO_setAeroportoDecolagem(vooBubbleSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooBubbleSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooSelectionSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooSelectionSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooInsertionSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooInsertionSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooShellSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooShellSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooQuickSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooQuickSort, pistaPouso);

				VOO_setAeroportoDecolagem(vooHeapSort, pistaDecolagem);
				VOO_setAeroportoPouso(vooHeapSort, pistaPouso);

                //VOO_showVoo(voo);
                MATRIZ_VOOS_setVoo(&(vetor->vetorBubbleSort[i]), vooBubbleSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorSelectionSort[i]), vooSelectionSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorInsertionSort[i]), vooInsertionSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorShellSort[i]), vooShellSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorQuickSort[i]), vooQuickSort);
				MATRIZ_VOOS_setVoo(&(vetor->vetorHeapSort[i]), vooHeapSort);
				
            }
            count++;
        }
    }

	// char opcaoArquivo;
	// while(!feof(arquivo)){
	// 	int count=0;
	// 	//Pegando o primeiro caractere de cada linha do arquivo e armazenando numa varíavel de area de troca
	// 	fscanf(arquivo,"%c", &opcaoArquivo);
	// 	if(count>numMatrizes){
	// 		if(opcaoArquivo!='\n'){
	// 			printf("%c", opcaoArquivo);
	// 		}
	// 	}
	// 	count++;
	// }

	return 0;	
	
}

int VETOR_MATRIZ_VOOS_bubbleSort(VETOR_MATRIZ_VOOS *vetor){
	printf("Entrou no Bubble\n");
	bubbleSort(vetor->vetorBubbleSort, vetor->numElementos);
}
int VETOR_MATRIZ_VOOS_selectionSort(VETOR_MATRIZ_VOOS *vetor){
	printf("Entrou no Selection\n");
	selectionSort(vetor->vetorSelectionSort, vetor->numElementos);
}
int VETOR_MATRIZ_VOOS_insertionSort(VETOR_MATRIZ_VOOS *vetor){
	printf("Entrou no insertion\n");
	insertionSort(vetor->vetorInsertionSort, vetor->numElementos);
}
int VETOR_MATRIZ_VOOS_shellSort(VETOR_MATRIZ_VOOS *vetor){
	printf("Entrou no Shell\n");
	shellSort(vetor->vetorShellSort, vetor->numElementos);
}
int VETOR_MATRIZ_VOOS_quickSort(VETOR_MATRIZ_VOOS *vetor){
	printf("Entrou no Quick\n");
	quickSort(vetor->vetorQuickSort, vetor->numElementos);
}
int VETOR_MATRIZ_VOOS_heapSort(VETOR_MATRIZ_VOOS *vetor){
	printf("Entrou no Heap\n");
	heapSort(vetor->vetorHeapSort, vetor->numElementos);
}

// int VETOR_MATRIZ_VOOS_copiaOriginalParaOrdenavel(VETOR_MATRIZ_VOOS *vetor){
//     for(int i=0; i<vetor->numElementos; i++){
//         vetor->vetorOrdenavel[i]=vetor->vetorOriginal[i];
//         for(int j=0; j<vetor->vetorOriginal[i].totalVoos; j++){
//             for(int k=0; k<24; k++){
//                 for(int l=0; l<24; l++){
//                     if(vetor->vetorOriginal[i].item_matriz[k][l].numVoos>0){
//                         for(int m=0; m<vetor->vetorOriginal[i].item_matriz[k][l].numVoos; m++){
//                             VOO **voo;
//                             LISTA_DE_VOOS_getVoo(&(vetor->vetorOriginal[i].item_matriz[k][l].item), m,voo);
//                             MATRIZ_VOOS_setVoo(&(vetor->vetorOrdenavel[i]), *voo);
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

int VETOR_MATRIZ_VOOS_setNumElementos(VETOR_MATRIZ_VOOS *vetor, int n);
int VETOR_MATRIZ_VOOS_getNumElementos(VETOR_MATRIZ_VOOS *vetor, int *n);



void bubbleSort(MATRIZ_VOOS *vetor, int count){
    int i = count, j;
    MATRIZ_VOOS temp;

    while(i > 0){
        for(j = 0; j < i - 1; j++){
            if(vetor[j].IDMatrizVoos > vetor[j + 1].IDMatrizVoos){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
        i--;
    }
}

int selectionSort(MATRIZ_VOOS *vetor, int n){
	--n; /* considering that n is the real size of elements */

	if (n < 1)
		return -1;

	for (int i = 0; i < n - 1; ++i) {
		int min = i;

		/* find next smallest */
		for (int j = i + 1; j <= n; ++j)
			if (vetor[j].IDMatrizVoos < vetor[min].IDMatrizVoos)
				min = j;

		/* swap smallest with current value */
		if (min != i) {
			MATRIZ_VOOS tmp = vetor[i];
			vetor[i] = vetor[min];
			vetor[min] = tmp;
		}
	}

	return 0;
}

void swapInsertionSort(MATRIZ_VOOS *vetor, int index1, int index2){
	MATRIZ_VOOS tempElement = vetor [index1];
	vetor [index1] = vetor [index2];
	vetor [index2] = tempElement;
}

void insertionSort (MATRIZ_VOOS *vetor, int count){
	//For each element in the array
	for (int i = 1; i < count; i++) {
		//Move a pointer backwards from that element
		//see if it needs to be swapped with the previous element in the array
		//and swap it as needed
		for (int j = i; j > 0 && vetor[j].IDMatrizVoos < vetor[j-1].IDMatrizVoos; j--) {
			swapInsertionSort(vetor, j, j-1);
		}
	}
}

void swapShellSort(MATRIZ_VOOS *vetor, int i, int j)
{
    if (!vetor)
        return;

    MATRIZ_VOOS temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp;
}

void shellSort(MATRIZ_VOOS *vetor, int size)
{
    int delta = 1;

    while (delta < size / 3)
        delta = delta * 3 + 1;

    while (delta >= 1)
    {
        for (int pass = delta; pass < size; pass++)
        {
            for (int cur = pass; cur >= delta && vetor[cur - delta].IDMatrizVoos > vetor[cur].IDMatrizVoos; cur -= delta)
                swapShellSort(vetor, cur - delta, cur);
        }
        delta /= 3;
    }
}


void particaoQuickSort(int Esq, int Dir,int *i, int *j, MATRIZ_VOOS *vetor){
	MATRIZ_VOOS pivo, aux;
	*i = Esq; *j = Dir;
	pivo = vetor[(*i + *j)/2]; /* obtem o pivo x */
	do{
		while (pivo.IDMatrizVoos > vetor[*i].IDMatrizVoos) (*i)++;
		while (pivo.IDMatrizVoos < vetor[*j].IDMatrizVoos) (*j)--;
		if (*i <= *j){
			aux = vetor[*i]; vetor[*i] = vetor[*j]; vetor[*j] = aux;
			(*i)++; (*j)--;
		}
	} while (*i <= *j);
}

void ordenaQuickSort(int Esq, int Dir, MATRIZ_VOOS *vetor){
	int i,j;
	particaoQuickSort(Esq, Dir, &i, &j, vetor);
	if (Esq < j) ordenaQuickSort(Esq, j, vetor);
	if (i < Dir) ordenaQuickSort(i, Dir, vetor);
}
void quickSort(MATRIZ_VOOS *vetor, int n){
	ordenaQuickSort(0, n-1, vetor);
}

void rebuildHeapSort(MATRIZ_VOOS *vetor, int limit, int pos)
{		
	int c1, c2;
	
	c1 = 2 * pos;
	c2 = c1 + 1;
	
	if(c1 > limit || (vetor[pos - 1].IDMatrizVoos >= vetor[c1 - 1].IDMatrizVoos && vetor[pos - 1].IDMatrizVoos >= vetor[c2 - 1].IDMatrizVoos))
		return;
	
	int greater_index = -1;
	
	if(c2 > limit)
		greater_index = c1;
	else
	{		
		if(vetor[c1 - 1].IDMatrizVoos > vetor[c2 - 1].IDMatrizVoos)
			greater_index = c1;
		else
			greater_index = c2;
	}
	
	if(greater_index != -1)
	{
		MATRIZ_VOOS aux = vetor[greater_index - 1];
		vetor[greater_index - 1] = vetor[pos - 1];
		vetor[pos - 1] = aux;
		rebuildHeapSort(vetor, limit, greater_index);
	}
}


void buildHeapSort(MATRIZ_VOOS *vetor, int size_v)
{
	int left;
	
	if(size_v % 2 == 0)
		left = size_v / 2 + 1;
	else
		left = (size_v - 1) / 2 + 1;
	
	while(left > 1)
	{
		left--;
		rebuildHeapSort(vetor, size_v, left);
	}
}

void heapSort(MATRIZ_VOOS *vetor, int size_v)
{
	// builds the heap
	buildHeapSort(vetor, size_v);

	/*
		change the item of the position 1 with the item of the position "n", 
		after with "n - 1", "n - 2" until there only 1 item.
	*/
	int limit = size_v;
	
	while(1)
	{		
		MATRIZ_VOOS aux = vetor[0];
		vetor[0] = vetor[limit - 1];
		vetor[limit - 1] = aux;
		
		rebuildHeapSort(vetor, limit - 1, 1);
			
		limit--;
		
		if(limit <= 2 && vetor[0].IDMatrizVoos <= vetor[1].IDMatrizVoos)
			break;
	}
}