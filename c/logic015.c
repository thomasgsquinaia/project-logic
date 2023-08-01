//15- Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
//Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include <stdio.h>

int main () {
  float areaQuadrada, resLitros,rendeUmLitro, lataDeTinta, resLatas,valorLataTinta, total;
  // QUARTA PROPORCIONAL
  // 1 LITRO ----------- 3 METROS
  // X LITRO ----------- areaQuadrada
  //1 lata de 18 litros cobre 3x18=54metro2

  printf("Digite a área quadrada a ser pintada: ");
  scanf("%f", &areaQuadrada);

  //Quantidade de latas de tinta 1litro faz 3metros quadrados => 
  rendeUmLitro = 3; //metros
  lataDeTinta = 18; //litros
  valorLataTinta = 80;
  resLitros = areaQuadrada/rendeUmLitro;  
  resLatas = resLitros / lataDeTinta;
  total = resLatas * valorLataTinta;

  if(resLitros < 18) {
    printf("Litros: %2.f\n", resLitros);
    printf("Total a ser pago: %2.f\n", valorLataTinta);
    printf("Neste caso compre uma lata de tinta por %2.f\n", valorLataTinta);
    printf("A quantidade de latas a serem compradas é de 1 e o total a ser pago é de %2.f\n", valorLataTinta);
  };

  if(resLitros >= 18) {
    printf("Latas: %2.f\n", resLatas);
    printf("Total a ser pago: %2.f\n", total);
    printf("A quantidade de latas a serem compradas é de %2.f e o total a ser pago é de R$%2.f\n", resLatas, total);
  }

  return 0;
}