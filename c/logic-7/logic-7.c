#include <stdio.h>
// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
// Calcule e mostre o total do seu salário no referido mês.

int main() {
  float salarioPorHora, horasTrabalhadasPorMes, calcSalario;

  printf("Digite quanto você ganha por hora trabalhada: ");
  scanf("%f", &salarioPorHora);
  printf("Digite quantas horas você trabalha por mês: ");
  scanf("%f", &horasTrabalhadasPorMes);

  calcSalario = salarioPorHora * horasTrabalhadasPorMes;
  printf("O seu salário desse mês é igual a: %2.f dinheiros\n", calcSalario);

  return 0;
}