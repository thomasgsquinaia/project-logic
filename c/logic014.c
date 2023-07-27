//15 - Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
//Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
//8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. 
//quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

#include <stdio.h>

int main() {
  float horasTrabalhadasMes, salarioPorHora, somaLiquido, somaDescontos, somaSalarioMesBruto, impostoRenda, sindicato, inss;
  
  printf("Digite o valor da sua hora: ");
  scanf("%f", &salarioPorHora);

  printf("Digite quantas horas trabalhadas por mês: ");
  scanf("%f", &horasTrabalhadasMes);

  somaSalarioMesBruto = salarioPorHora * horasTrabalhadasMes;

  impostoRenda = (somaSalarioMesBruto * 0.11);
  inss = (somaSalarioMesBruto * 0.08);
  sindicato = (somaSalarioMesBruto * 0.05);
  
  somaDescontos = impostoRenda + inss + sindicato;
  somaLiquido = somaSalarioMesBruto - somaDescontos;

  printf("+ Salário Bruto: R$%2.f\n", somaSalarioMesBruto);
  printf("- IR (11 porcento): R$%2.f\n", impostoRenda);
  printf("- INSS (8 porcento): R$%2.f\n", inss);
  printf("- Sindicato (5 porcento): R$%2.f\n", sindicato);
  printf("= Salário Líquido: R$%4.f\n", somaLiquido);





}

