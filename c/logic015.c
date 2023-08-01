//15- Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
//Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include <stdio.h>

int main () {
  float areaQuadrada, resCoberturaTintaLitro, valorTotal;
  // QUARTA PROPORCIONAL
  // 1 LITRO ----------- 3 METROS
  // X LITRO ----------- areaQuadrada
  //1 lata de 18 litros cobre 3x18=54metro2

  //Quantidade de latas de tinta 1litro faz 3metros quadrados => 
  printf("Digite a area quadrada a ser pintada: ");
  scanf("%f", &areaQuadrada);

  //Quanto vou pagar? cada lata é 80reais => 

  if(areaQuadrada > 54) {
    resCoberturaTintaLitro = areaQuadrada/3;
    valorTotal = resCoberturaTintaLitro * 80;
    printf("A quantidade de latas a serem compradas é de %2.f e o total é de %2.f\n", resCoberturaTintaLitro, valorTotal);
  };
  if(areaQuadrada > 0 && areaQuadrada <=54) {
    resCoberturaTintaLitro = areaQuadrada/3;
    valorTotal = resCoberturaTintaLitro * 80;
    printf("A quantidade de latas a serem compradas é de %2.f  e o total é de %2.f\n", resCoberturaTintaLitro, valorTotal);
  };

  return 0;
}