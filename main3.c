//Incluindo bibliotecas padrões necessárias
#include <stdio.h>
#include <stdlib.h>

//Incluindo TADs auxiliares
#include "TAD_AUXILIAR/horario.h"

//Incluindo TADs Globais
#include "TAD/VOO.h"
#include "TAD/LISTA_DE_VOOS.h"
#include "TAD/ITEM_MATRIZ.h"
#include "TAD/MATRIZ_VOOS.h"
#include "TAD/VETOR_MATRIZ_VOOS.h"

//Definindo variáveis globais para a matriz struct e um ponteiro para a matriz
//O uso de variáveis globais é justificado aqui para poupar sintaxe e desempenho, visto que sao variavéis que nunca sofrerão
//mudanças de endereço e etc.
MATRIZ_VOOS matriz;
VOO *voo;
MATRIZ_VOOS *ponteiroMatriz;
// MATRIZ_VOOS *vetorMatrizVoosOriginal;
// MATRIZ_VOOS *vetorMatrizVoosOrdenavel;



// void bubbleSort(MATRIZ_VOOS *vetor, int count){
//     int i = count, j;
//     MATRIZ_VOOS temp;

//     while(i > 0){
//         for(j = 0; j < i - 1; j++){
//             if(vetor[j].IDMatrizVoos > vetor[j + 1].IDMatrizVoos){
//                 printf("C");
//                 temp = vetor[j];
//                 vetor[j] = vetor[j + 1];
//                 vetor[j + 1] = temp;
//             }
//         }
//         i--;
//     }
// }

// int selection_sort(MATRIZ_VOOS *vetor, int n)
// {
// 	--n; /* considering that n is the real size of elements */

// 	if (n < 1)
// 		return -1;

// 	for (int i = 0; i < n - 1; ++i) {
// 		int min = i;

// 		/* find next smallest */
// 		for (int j = i + 1; j <= n; ++j)
// 			if (vetor[j].IDMatrizVoos < vetor[min].IDMatrizVoos)
// 				min = j;

// 		/* swap smallest with current value */
// 		if (min != i) {
// 			MATRIZ_VOOS tmp = vetor[i];
// 			vetor[i] = vetor[min];
// 			vetor[min] = tmp;
// 		}
// 	}

// 	return 0;
// }

// void swapInsertionSort(MATRIZ_VOOS *vetor, int index1, int index2){
// 	MATRIZ_VOOS tempElement = vetor [index1];
// 	vetor [index1] = vetor [index2];
// 	vetor [index2] = tempElement;
// }

// void insertionSort (MATRIZ_VOOS *vetor, int count) {
// 	//For each element in the array
// 	for (int i = 1; i < count; i++) {
// 		//Move a pointer backwards from that element
// 		//see if it needs to be swapped with the previous element in the array
// 		//and swap it as needed
// 		for (int j = i; j > 0 && vetor[j].IDMatrizVoos < vetor[j-1].IDMatrizVoos; j--) {
// 			swapInsertionSort(vetor, j, j-1);
// 		}
// 	}
// }

// void swapShellSort(MATRIZ_VOOS *vetor, int i, int j)
// {
//     if (!vetor)
//         return;

//     MATRIZ_VOOS temp = vetor[i];
//     vetor[i] = vetor[j];
//     vetor[j] = temp;
// }

// void shellSort(MATRIZ_VOOS *vetor, int size)
// {
//     int delta = 1;

//     while (delta < size / 3)
//         delta = delta * 3 + 1;

//     while (delta >= 1)
//     {
//         for (int pass = delta; pass < size; pass++)
//         {
//             for (int cur = pass; cur >= delta && vetor[cur - delta].IDMatrizVoos > vetor[cur].IDMatrizVoos; cur -= delta)
//                 swapShellSort(vetor, cur - delta, cur);
//         }
//         delta /= 3;
//     }
// }

// void quicksort(int *target, int left, int right) {
// 	if(left >= right) return;
// 	int i = left, j = right;
// 	int tmp, pivot = target[i];
// 	for(;;) {
// 	while(target[i] < pivot) i++;
// 	while(pivot < target[j]) j--;
// 	if(i >= j) break;
// 	tmp = target[i]; target[i] = target[j]; target[j] = tmp;
// 	i++; j--;
// 	}
// 	quicksort(target, left, i-1);
// 	quicksort(target, j+1, right);
// }

// void particaoQuickSort(int Esq, int Dir,int *i, int *j, MATRIZ_VOOS *vetor){
// 	MATRIZ_VOOS pivo, aux;
// 	*i = Esq; *j = Dir;
// 	pivo = vetor[(*i + *j)/2]; /* obtem o pivo x */
// 	do{
// 		while (pivo.IDMatrizVoos > vetor[*i].IDMatrizVoos) (*i)++;
// 		while (pivo.IDMatrizVoos < vetor[*j].IDMatrizVoos) (*j)--;
// 		if (*i <= *j){
// 			aux = vetor[*i]; vetor[*i] = vetor[*j]; vetor[*j] = aux;
// 			(*i)++; (*j)--;
// 		}
// 	} while (*i <= *j);
// }

// void ordenaQuickSort(int Esq, int Dir, MATRIZ_VOOS *vetor){
// 	printf("TESTE");
// 	int i,j;
// 	particaoQuickSort(Esq, Dir, &i, &j, vetor);
// 	if (Esq < j) ordenaQuickSort(Esq, j, vetor);
// 	if (i < Dir) ordenaQuickSort(i, Dir, vetor);
// }
// void quickSort(MATRIZ_VOOS *vetor, int n){
// 	ordenaQuickSort(0, n-1, vetor);
// }

// void rebuildHeapSort(MATRIZ_VOOS *vetor, int limit, int pos)
// {		
// 	int c1, c2;
	
// 	c1 = 2 * pos;
// 	c2 = c1 + 1;
	
// 	if(c1 > limit || (vetor[pos - 1].IDMatrizVoos >= vetor[c1 - 1].IDMatrizVoos && vetor[pos - 1].IDMatrizVoos >= vetor[c2 - 1].IDMatrizVoos))
// 		return;
	
// 	int greater_index = -1;
	
// 	if(c2 > limit)
// 		greater_index = c1;
// 	else
// 	{		
// 		if(vetor[c1 - 1].IDMatrizVoos > vetor[c2 - 1].IDMatrizVoos)
// 			greater_index = c1;
// 		else
// 			greater_index = c2;
// 	}
	
// 	if(greater_index != -1)
// 	{
// 		MATRIZ_VOOS aux = vetor[greater_index - 1];
// 		vetor[greater_index - 1] = vetor[pos - 1];
// 		vetor[pos - 1] = aux;
// 		rebuildHeapSort(vetor, limit, greater_index);
// 	}
// }


// void buildHeapSort(MATRIZ_VOOS *vetor, int size_v)
// {
// 	int left;
	
// 	if(size_v % 2 == 0)
// 		left = size_v / 2 + 1;
// 	else
// 		left = (size_v - 1) / 2 + 1;
	
// 	while(left > 1)
// 	{
// 		left--;
// 		rebuildHeapSort(vetor, size_v, left);
// 	}
// }

// void heapSort(MATRIZ_VOOS *vetor, int size_v)
// {
// 	// builds the heap
// 	buildHeapSort(vetor, size_v);

// 	/*
// 		change the item of the position 1 with the item of the position "n", 
// 		after with "n - 1", "n - 2" until there only 1 item.
// 	*/
// 	int limit = size_v;
	
// 	while(1)
// 	{		
// 		MATRIZ_VOOS aux = vetor[0];
// 		vetor[0] = vetor[limit - 1];
// 		vetor[limit - 1] = aux;
		
// 		rebuildHeapSort(vetor, limit - 1, 1);
			
// 		limit--;
		
// 		if(limit <= 2 && vetor[0].IDMatrizVoos <= vetor[1].IDMatrizVoos)
// 			break;
// 	}
// }

//Função que imprime se o retorno das funções foi positivo ou negativo. Feita pra poupar retrabalho.
void printarRetorno(int retorno){
	if(retorno==0){
		printf("########################################################################################################\n");
		printf("#                                              Feito!                                                  #\n");
		printf("########################################################################################################\n");
	} else {
		printf("########################################################################################################\n");
		printf("#                                         Erro. Tente novamente.                                       #\n");
		printf("########################################################################################################\n");
	}
}

//Semelhante a primeira, porém com uma mensagem de erro diferente.
void printarRetornoVID(int retorno){
	if(retorno==0){
		printf("########################################################################################################\n");
		printf("#                                              Feito!                                                  #\n");
		printf("########################################################################################################\n");
	} else {
		printf("########################################################################################################\n");
		printf("#                                      Erro. VID nao encontrado.                                       #\n");
		printf("########################################################################################################\n");
	}
}

//Aqui foram criadas funções iguais para o MODO ARQUIVO e o interativo, para poupar retrabalho. Nessas funções, são usadas
//as variáveis globais.

//Incializa a matriz usando a função MATRIZ_VOOS_inicializa
int opcaoA(){
		return MATRIZ_VOOS_inicializa(ponteiroMatriz);
}

//Cria dois TADS auxiliares horários e um VOO com malloc, o aloca na matriz e libera espaço dos mallocs. A função usada foi
//MATRIZ_VOOS_setVoo
int opcaoB(unsigned int *horaDeco, unsigned int *minDeco, unsigned int *horaPouso, unsigned int *minPouso, char *aeroDeco, char *aeroPouso, unsigned int *pis){

	// Criando ponteiros e um int pra guardar retorno;
	int retorno;
	VOO * swapVoo=NULL;
	horario *swapHorario1=NULL, *swapHorario2=NULL;

	// Reservando memória para guardar horário de decolagem e usando funções do TAD horario pra definir hora e minuto
	swapHorario1 = malloc(sizeof(horario));
	horario_inicializa(swapHorario1);
	horario_setHorario(swapHorario1, *horaDeco, *minDeco);

	// Reservando memória para guardar horário de pouso e usando funções do TAD horario pra definir hora e minuto
	swapHorario2 = malloc(sizeof(horario));
	horario_inicializa(swapHorario2);
	horario_setHorario(swapHorario2, *horaPouso, *minPouso);

	// Reservando memória para guardar VOO para alocar.
	swapVoo = malloc(sizeof(VOO));
	VOO_inicializa(swapVoo);

	// Definindo parâmetros do VOO com as funções feitas para tal
	VOO_setHorarioDecolagem(swapVoo, swapHorario1);
	VOO_setHorarioPouso(swapVoo, swapHorario2);
	VOO_setAeroportoDecolagem(swapVoo, aeroDeco);
	VOO_setAeroportoPouso(swapVoo, aeroPouso);
	VOO_setIdentificadorPistaDecolagem(swapVoo, *pis);

	// Guardando retorno
	retorno = MATRIZ_VOOS_setVoo(ponteiroMatriz,swapVoo);

	// Liberando memória usada nos mallocs
	free(swapVoo);
	free(swapHorario1);
	free(swapHorario2);

	return retorno;
}

//Remove um VOO a partir do VID usando a MATRIZ_VOOS_delVoo
int opcaoC(unsigned int *VID){
	return MATRIZ_VOOS_delVoo(ponteiroMatriz, VID);
}

//Procura um VOO a partir do VID usando a MATRIZ_VOOS_getVoo
int opcaoD(unsigned int *VID){
	return MATRIZ_VOOS_getVoo(ponteiroMatriz, VID);
}

int opcaoE(unsigned int *horaDeco, unsigned int *minDeco, unsigned int *horaPouso, unsigned int *minPouso){
	int retorno;
	horario *swapHorario1, *swapHorario2;

	// Reservando memória para guardar horário de decolagem e usando funções do TAD horario pra definir hora e minuto
	swapHorario1 = malloc(sizeof(horario));
	horario_inicializa(swapHorario1);
	horario_setHorario(swapHorario1, *horaDeco, *minDeco);

	// Reservando memória para guardar horário de pouso e usando funções do TAD horario pra definir hora e minuto
	swapHorario2 = malloc(sizeof(horario));
	horario_inicializa(swapHorario2);
	horario_setHorario(swapHorario2, *horaPouso, *minPouso);


	retorno = MATRIZ_VOOS_showVoosDecolagemPouso(ponteiroMatriz, swapHorario1, swapHorario2);

	free(swapHorario1);
	free(swapHorario2);

	return retorno;
}

int opcaoF(unsigned int *horaDeco, unsigned int *minDeco){
	int retorno;
	horario *swapHorario1;

	// Reservando memória para guardar horário de decolagem e usando funções do TAD horario pra definir hora e minuto
	swapHorario1 = malloc(sizeof(horario));
	horario_inicializa(swapHorario1);
	horario_setHorario(swapHorario1, *horaDeco, *minDeco);

	retorno = MATRIZ_VOOS_showVoosDecolagem(ponteiroMatriz, swapHorario1);

	free(swapHorario1);

	return retorno;
}

int opcaoG(unsigned int *horaDeco, unsigned int *minDeco){
	int retorno;
	horario *swapHorario1;

	// Reservando memória para guardar horário de decolagem e usando funções do TAD horario pra definir hora e minuto
	swapHorario1 = malloc(sizeof(horario));
	horario_inicializa(swapHorario1);
	horario_setHorario(swapHorario1, *horaDeco, *minDeco);

	retorno = MATRIZ_VOOS_showVoosPouso(ponteiroMatriz, swapHorario1);

	free(swapHorario1);

	return retorno;
}

//Imprime todos os VOOs da matriz usando a MATRIZ_VOOS_showVoos
int opcaoH(){
	return MATRIZ_VOOS_showVoos(ponteiroMatriz);
}

int opcaoI(){
	return MATRIZ_VOOS_showHorarioMaisVoos(ponteiroMatriz);
}

int opcaoJ(){
	return MATRIZ_VOOS_showHorarioMenosVoos(ponteiroMatriz);
}

int opcaoK(){
	return MATRIZ_VOOS_showListaAlteracaoMaisRecente(ponteiroMatriz);
}

int opcaoL(){
	return MATRIZ_VOOS_showListaAlteracaoMenosRecente(ponteiroMatriz);
}

//Diz se a matriz e esparça ou nao usando a MATRIZ_VOOS_verificarMatrizEsparca
void opcaoM(){
	MATRIZ_VOOS_verificarMatrizEsparca(ponteiroMatriz);
}

int salvarArquivo(FILE *salvar){
	return MATRIZ_VOOS_salvarMatriz(ponteiroMatriz, salvar);
}

int main(){

	VETOR_MATRIZ_VOOS vetorMatrizVoos;

	int modoArquivo;

	//Colocando endereço da matriz global no ponteiro global
	ponteiroMatriz = &matriz;

	//Criando algumas áreas de memória de troca para o resto do programa
	char swapString1[30], swapString2[30], opcaoArquivo;
	unsigned int swapUnsInt1, swapUnsInt2, swapUnsInt3, swapUnsInt4, swapUnsInt5;

	//Definindo input padrão, caso a pessoa não digite nada e criando a variável em si
	char input = ' ';

	//Definindo retorno padrão de funções como erro
	int retorno = 1;

	//Criando um ponteiro para arquivo de leitura e gravação
	FILE * arquivo = NULL;
	FILE * bancoDados = NULL;

	//Inicializando a matriz automaticamente, caso o usuário se esqueça
	MATRIZ_VOOS_inicializa(ponteiroMatriz);

	//Printando Menu do programa
	printf("########################################################################################################\n");
	printf("#                                       Seja-bem vindo ao xAero Airport System                         #\n");
	printf("#                                                                                                      #\n");
	printf("#                                                       !                                              #\n");
  printf("#                                                       !                                              #\n");
  printf("#                                                      /_\\                                             #\n");
  printf("#                                               =====/` - '\\=====                                      #\n");
  printf("#                                                   ( ( O ) )                                          #\n");
  printf("#                            --______-------________/\\  -  /\\_______--------______--                   #\n");
  printf("#                                 ---------____***___/`---'\\__***____--------                          #\n");
  printf("#                                                                                                      #\n");
	printf("########################################################################################################\n");

	printf("Selecione um cenário?\n\n");

	printf("a- Cenário 1.\n");
	printf("b- Cenário 2.\n");
	printf("c- Cenário 3.\n");
	printf("d- Cenário 4.\n");
	printf("e- Cenário 5.\n");
	printf("f- Cenário 6.\n");
	printf("g- Cenário 7.\n");
    printf("g- Cenário 8.\n");
	printf("g- Cenário 9.\n");
    printf("g- Cenário 10.\n");
    printf("g- Cenário 11.\n");
    printf("g- Cenário 12.\n");
	printf("?- Sobre\n");
	printf("0- Sair do programa.\n\n");


	printf("Digite alguma opcao: ");

	//While eterno, até que a pessoa digite 0 para sair do programa
	while(1){

		//Escaneia o que o usuário digitar.
		scanf("%c", &input);
		printf("\n");

		//Pega o que o usuário digitar e trata, usando memória de troca criada e as funções previamente estabelecidas.
		switch(input){

		case 'a':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 73, 10, 365);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			// vetorMatrizVoosOriginal=malloc(365*sizeof(MATRIZ_VOOS));

            // for(int i=0; i<73; i++){
            //     MATRIZ_VOOS_inicializa(&(vetorMatrizVoosOriginal[i]));
            //     printf("/////////// %d ///////////////", vetorMatrizVoosOriginal[i].IDMatrizVoos);
            //     for(int j=0; j<10; j++){
            //         horario *horario=malloc(sizeof(horario));       
            //         int idpd=7;
            //         char pistaDecolagem[30]="Sobe";
            //         char pistaPouso[30]="Desce";
            //         voo=malloc(sizeof(VOO));

            //         VOO_inicializa(voo);

            //         horario->hora=12;
            //         horario->min=24;

            //         VOO_setHorarioDecolagem(voo, horario);

            //         horario->hora=13;
            //         horario->min=25;

            //         VOO_setHorarioPouso(voo, horario);
            //         VOO_setAeroportoDecolagem(voo, pistaDecolagem);
            //         VOO_setAeroportoPouso(voo, pistaPouso);
            //         VOO_setIdentificadorPistaDecolagem(voo, idpd);
            //         //VOO_showVoo(voo);
            //         MATRIZ_VOOS_setVoo(&(vetorMatrizVoosOriginal[i]), voo);
            //     }
            // }

            //quickSort(vetorMatrizVoosOriginal, 73);
			
			break;

		case 'b':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 365, 10, 365);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}

			break;

		case 'c':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 73, 100, 365);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			break;

		case 'd':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 365, 100, 365);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}

			break;

		case 'e':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 730, 10, 3650);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}

			break;

		case 'f':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 3650, 10, 3650);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}

			break;

		case 'g':

			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 73, 100, 3650);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}

		break;

		case 'h':
			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 3650, 100, 3650);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			break;

		case 'i':
			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 7300, 10, 36500);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			break;

		case 'j':
			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 36500, 10, 36500);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			break;

		case 'k':
			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 7300, 100, 36500);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			break;

		case 'l':
			printf("Digite '0' para modo Aleatório e '1' para modo arquivo: ");
			scanf("%d", &modoArquivo);
			if(modoArquivo==0){

				VETOR_MATRIZ_VOOS_setCenarioAleatorio(&vetorMatrizVoos, 36500, 1000, 36500);
				VETOR_MATRIZ_VOOS_bubbleSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_selectionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_insertionSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_shellSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_quickSort(&vetorMatrizVoos);
				VETOR_MATRIZ_VOOS_heapSort(&vetorMatrizVoos);

			}else if(modoArquivo==1){

			}
			break;

		case '?':
			printf("########################################################################################################\n");
			printf("# xAero e um software de gerenciamento de aeroportos desenvolvido para o trabalho pratico da materia de#\n");
			printf("# Algoritmos E Estruturas de Dados I, ministrada pela professora Doutora Thais R. M. Braga Silva.      #\n");
			printf("########################################################################################################\n");
			printf("#                                        Integrantes do grupo:                                         #\n");
			printf("#                        Mateus Pinto da Silva -- https://github.com/mateusps10                        #\n");
			printf("#                    Leandro Lazaro Araujo Vieira -- https://github.com/leandrolazaro                  #\n");
			printf("#                   Vinicius Julio Martins Barbosa -- https://github.com/VinicioHaner                  #\n");
			printf("########################################################################################################\n");


			break;

		//O caso 0 engloba o que acontece quando o usuário pede pra sair do programa
		case '0':
			printf("########################################################################################################\n");
			printf("#                        Muito obrigado por usar o xAero Airport System s2                             #\n");
			printf("########################################################################################################\n\n");
			system("pause");
			return 0;

		default:
			printf("Digite outra opcao : ");
	}

	}


}

