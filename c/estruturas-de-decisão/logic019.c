#include <stdio.h>
//20 - Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

int main() {
  int n1;

  printf("Digite um número: ");
  scanf("%i", &n1);
  
  if(n1 > 0) {
    printf("numero positivo");
  }
  if(n1 < 0) {
    printf("numero negativo");
  }
}
