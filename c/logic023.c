/*24- Faça um Programa que leia três números e mostre o maior deles.*/
#include <stdio.h>

int main()
{
  float n1, n2, n3;

  printf("Digite um número:");
  scanf("%f", &n1);
  printf("Digite um segundo número:");
  scanf("%f", &n2);
  printf("Digite um terceiro número:");
  scanf("%f", &n3);

  if(n1 > n2 && n1 > n3) {
    printf("número um é o maior número: %f", n1);
  }

  if(n2 > n1 && n2 > n3) {
    printf("número dois é o maior número: %f", n2);
  }

  if(n3 > n1 && n3 > n2) {
    printf("número três é o maior número: %f", n3);
  }

  
  return 0;
}