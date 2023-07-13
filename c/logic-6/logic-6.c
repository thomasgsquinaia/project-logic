#include <stdio.h>

int main() {
  float area,areaDobrada, lado;

  printf("Digite o comprimento do lado do quadrado: ");
  scanf("%f", &lado);
  area = lado * lado;
  printf("Área do quadrado é igual a: %2.f\n", area);

  areaDobrada = ((lado * lado) * 2);
  printf("O dobro da área é igual a: %2.f\n", areaDobrada);

  return 0;
}