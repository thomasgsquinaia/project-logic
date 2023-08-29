/*
28-Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

#include <stdio.h>

int main() {
  char turno;

  printf("Digite o turno que você estuda: M-matutino ou V-Vespertino ou N-Noturno: ");
  scanf("%c", &turno);

  if(turno == 'M' || turno == 'm') {
    printf("Bom Dia!");
  }
  else if(turno == 'V' || turno == 'v') {
    printf("Boa Tarde!");
  }
  else if(turno == 'N' || turno == 'n') {
    printf("Boa Noite!");
  }
  else {
    printf("Valor Inválido!");
  }

  return 0;
}