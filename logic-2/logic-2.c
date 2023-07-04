#include <stdio.h>

int main() {
  float x;
  float y;
  float soma;

  printf("Digite um numero: ");
  scanf("%f", &x);
  printf("Digite outro numero:");
  scanf("%f", &y);

  soma = x + y;
  scanf("%f", &soma);
  printf("soma %2f\n: ", soma);

  return 0;
}