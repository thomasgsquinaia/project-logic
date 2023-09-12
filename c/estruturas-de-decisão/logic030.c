//31 - Faça um Programa que leia um número e exiba o dia correspondente da semana. 
//(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

#include <stdio.h>

int main() {
  int dia_semana;

  printf("Digite um número da semana, sabendo-se que '1' é Domingo: ");
  scanf("%d", &dia_semana);

  switch (dia_semana)
  {
  case 1:
    printf("Domingo");
    break;
  case 2:
    printf("Segunda");
    break;
  case 3:
    printf("Treça");
    break;  
  case 4:
    printf("Quarta");
    break;
  case 5:
    printf("Quinta");
    break;
  case 6:
    printf("Sexta");
    break;
  case 7:
    printf("Sábado");
    break;
  default:
    printf("Valor inválido.");
    break;
  }
}