#include <stdio.h>
//Faça um Programa que peça 2 números inteiros e um número real. 
//Calcule e mostre: o produto do dobro do primeiro com metade do segundo. 
//a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
int main() {
  int n1, n2;
  float n3,sum;

  printf("Digite um numero inteiro: ");
  scanf("%d", &n1);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &n2);
  printf("Digite um numero real: ");
  scanf("%f", &n3);

  sum = ((n1 * (n2/2)) + (n1*3 + n3) + (n3*n3*n3));
  
  printf("O resultado é igual a: %2.f\n", sum);

  return 0;
}