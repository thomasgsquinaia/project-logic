/*
27-Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/

#include <stdio.h>

int main() { 
  float n1, n2, n3;

  printf("Digite um número: ");
  scanf("%f", &n1);
  printf("Digite um número: ");
  scanf("%f", &n2);
  printf("Digite um número: ");
  scanf("%f", &n3);

  if(n1 > n2 && n2 > n3) {
    printf("%2.f %2.f %2.f", n1, n2, n3);
  }
  else if(n1 > n3 && n3 > n2) {
    printf("%2.f %2.f %2.f", n1, n3, n2);
  }
  else if(n2 > n1 && n1 > n3) {
    printf("%2.f %2.f %2.f", n2, n1, n3);
  }
  else if(n2 > n3 && n3 > n1) {
    printf("%2.f %2.f %2.f", n2, n3, n1);
  }
  else if(n3 > n1 && n1 > n2) {
    printf("%2.f %2.f %2.f", n3, n1, n2);
  }
  else {
    printf("%2.f %2.f %2.f", n3, n2, n1);
  }

  return 0;
}