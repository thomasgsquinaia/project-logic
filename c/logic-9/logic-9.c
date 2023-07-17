#include <stdio.h>
//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
int main() {
  float tempCelsius, calcTemp;

  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &tempCelsius);

  calcTemp = (tempCelsius * 9/5) + 32;
  printf("A temperatura em Celsius igual a %2.f é equivalente a %2.f em Farenheit.\n", tempCelsius, calcTemp);

  return 0;
}