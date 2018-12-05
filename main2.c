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
// MATRIZ_VOOS matriz;
// VOO *voo;
// MATRIZ_VOOS *ponteiroMatriz;

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

int main(){
	//Definindo vetor para testes de ordenção
	VETOR_MATRIZ_VOOS vetorMatrizVoos;

	//Quando igual a 1 indica que deve ser lido um arquivo
	int modoArquivo;

	//Definindo input padrão, caso a pessoa não digite nada e criando a variável em si
	char input = ' ';

	//Definindo retorno padrão de funções como erro
	int retorno = 1;

	//Criando um ponteiro para arquivo de leitura
	FILE * arquivo = NULL;

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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
			}
			
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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
				//VINICIUS!!!MODO ARQUIVO DE ARQUIVO É AQUI! FAÇA O CÓDIGO DE LEITURA DE ARQUIVO NA FUNÇÃO "VOO_setCenarioArquivo". APENAS CHAME ESSA FUNÇÃO AQUI!
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

