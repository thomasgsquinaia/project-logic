//013 -Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, 
//utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7 

#include <stdio.h>

int main() {
  float altura, pesoHomem, pesoMulher;

  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  pesoHomem = (72.7 * altura) - 58;
  pesoMulher = (62.1 * altura) - 44.7;

  printf("O peso ideial para o homem é de %2.fKg e para a mulher é de %2.fKg\n", pesoHomem, pesoMulher);
}