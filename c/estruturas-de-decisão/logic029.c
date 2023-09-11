/*
30 - Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda,
 que depende do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto,
 mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos.

O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500 (inclusive) -
desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de 10% Salário Bruto acima de 2500 - desconto de 20%
Imprima na tela as informações, dispostas conforme o exemplo abaixo.
No exemplo o valor da hora é 5 e a quantidade de hora é 220.
-----
    Salário Bruto: (5 * 220)        : R$ 1100,00
    (-) IR (5%)                     : R$   55,00
    (-) INSS ( 10%)                 : R$  110,00
    FGTS (11%)                      : R$  121,00
    Total de descontos              : R$  165,00
    Salário Liquido                 : R$  935,00
*/
#include <stdio.h>

int main()
{
    float valorHora, qtdHorasMes, salarioBruto, descontoIR, salarioLiquido, Ir, Inss, Fgts, subDiff;

    printf("Digite o valor da sua hora:");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas que você trabalhou no mês:");
    scanf("%f", &qtdHorasMes);

    salarioBruto = valorHora * qtdHorasMes;

    if(salarioBruto <= 900) {
        descontoIR = 0.0; 
    } 
    else if (salarioBruto <= 1500) {
        descontoIR = 0.05;
    }
    else if (salarioBruto <= 2500) {
        descontoIR = 0.10;
    } 
    else if (salarioBruto > 2500) {
        descontoIR = 0.20;
    }
    else {
        printf("Deu ruim os ifs acima!");
    }

    Ir = salarioBruto * (descontoIR / 100);
    Inss = salarioBruto * (10.0 / 100);
    Fgts = salarioBruto * (5.0 / 100);
    subDiff = Inss + Fgts;
    salarioLiquido = salarioBruto - subDiff;

    printf("=============================\n");
    printf(" Salário Bruto: R$%2.f\n", salarioBruto);
    printf(" (-) IR (5 porcento) R$%2.f\n", Ir);
    printf(" (-) INSS (10 porcento) R$%2.f\n", Inss);
    printf(" (-) FGTS (11 porcento) R$%2.f\n", Fgts);
    printf(" Total de descontos     R$%2.f\n", subDiff);
    printf(" Salário Liquido        R$%2.f\n", salarioLiquido);
    printf("=============================\n");

    
    return 0;
}