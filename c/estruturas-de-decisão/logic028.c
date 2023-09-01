/*
29- As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores
e lhe contrataram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
-----
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante :
    aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.
*/

#include <stdio.h>

int main()
{
    float salario, percent_aumento, diferencaSalarial, salarioAtual;

    printf("Digite o salário do colaborador: ");
    scanf("%f", &salario);

    if (salario <= 280)
    {
        percent_aumento = 20;
    }
    else if (salario > 280 && salario <= 700)
    {
        percent_aumento = 15;
    }
    else if (salario >= 700 && salario <= 1500)
    {
        percent_aumento = 10;
    }
    else if (salario >= 1500)
    {
        percent_aumento = 5;
    }
    else {
        printf("Deu ruim os ifs acima.");
    }

    diferencaSalarial= salario * (percent_aumento / 100);
    salarioAtual = salario + diferencaSalarial;
    printf("O salário antes do reajuste: %2.f\n", salario);
    printf("O percentual de aumento aplicado: %2.f%%\n", percent_aumento);
    printf("O valor do aumento: R$%2.f\n", diferencaSalarial);
    printf("O novo salário, após o aumento: %2.f\n", salarioAtual);

    return 0;
}