#include <stdio.h>
//Programa que calcula área do raio
int main() {
  float pi, raio, area;
  pi = 3.14;

  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);

  area = (pi*(raio*raio));
  printf("A área do seu círculo é de: %.2f\n", area);

  return 0;
}