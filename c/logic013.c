//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
//Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de 

//São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.

//João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
//Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. 
/////Imprima os dados do programa com as mensagens adequadas.
#include <stdio.h>

int main() {
  float peso, multa, excedente;

  printf("Digite o peso de peixes: ");
  scanf("%f", &peso);

  excedente =  peso - 50;
  multa = excedente * 4;

  if(peso <= 50) {
    printf("A quantidade de kilos é %2.fKg nesse caso nao tem multa pois está menor que 50kg.\n", excedente);
  }
  if(peso > 50) {
    printf("A quantidade de kilos em excesso é de %2.fKg e a multa é de R$%2.f.\n", excedente, multa);
  }  

  return 0;
}