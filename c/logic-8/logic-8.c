#include <stdio.h>
//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
int main() {
  float tempFarenheit, calcTemp;

  printf("Digite a temperatura em Farenheit: ");
  scanf("%f", &tempFarenheit);

  calcTemp = (5 * (tempFarenheit - 32) / 9);
  printf("A temperatura em Farenheit igual a %2.f é equivalente a %2.f em Celcius.\n", tempFarenheit, calcTemp);

  return 0;
}