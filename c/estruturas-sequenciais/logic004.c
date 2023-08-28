#include <stdio.h>
//Programa que converte metros para centímetros
int main() {
  float m, c;
  printf("Digite um número para ser convertido para centímetros: ");
  scanf("%f", &m);
  c = (m * 100);
  printf("%.2fm correspondem a %.2fcm\n", m, c);
  return 0;
}