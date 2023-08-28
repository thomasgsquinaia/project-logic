/*Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar,
sabendo que a decisão é sempre pelo mais barato.
*/
#include <stdio.h>

int main()
{
  float p1, p2, p3;

  printf("Digite o primeiro preço: ");
  scanf("%f", &p1);
  printf("Digite o segundo preço: ");
  scanf("%f", &p2);
  printf("Digite o terceiro preço: ");
  scanf("%f", &p3);

  if (p1 < p2 && p1 < p3)
  {
    printf("Produto mais barato é o %2.f", p1);
  }
  if (p2 < p1 && p2 < p3)
  {
    printf("Produto mais barato é o %2.f", p2);
  }
  if (p3 < p1 && p3 < p2)
  {
    printf("Produto mais barato é o %2.f", p3);
  }

  return 0;
}