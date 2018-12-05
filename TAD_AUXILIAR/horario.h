/* Define o TAD e os protótipos das funções caso eles ainda nao tenham sido
definidos */
#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED

// Incluindo bibliotecas necessárias e/ou TADs auxiliares.
#include <stdlib.h>
#include <string.h>

// Definindo struct do TAD e o declarando como um tipo.
typedef struct {
  int hora;
  int min;
} horario;

// Protótipos das funções
int horario_inicializa(horario *ponteiro);
int horario_ehFuturo(horario *ponteiro1, horario *ponteiro2);
int horario_setHorario(horario *ponteiro, unsigned int hora, unsigned int min);
void horario_showHorario(horario *ponteiro);

// Fim do define
#endif // HOARIO_H_INCLUDED
