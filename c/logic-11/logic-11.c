#include <stdio.h>
//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
int main() {
  float altura, sum;

  printf("Digite a sua altura: ");
  scanf("%f", &altura);
  sum = (72.7*altura)-58;
  
  printf("O resultado é igual a: %2.f\n", sum);

  return 0;
}