//15- Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
//Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include <stdio.h>

int main () {
  float areaQuadrada, resLitros,rendeUmLitro, valorTotal, lataDeTinta, resLatas;
  // QUARTA PROPORCIONAL
  // 1 LITRO ----------- 3 METROS
  // X LITRO ----------- areaQuadrada
  //1 lata de 18 litros cobre 3x18=54metro2

  printf("Digite a area quadrada a ser pintada: ");
  scanf("%f", &areaQuadrada);

  //Quantidade de latas de tinta 1litro faz 3metros quadrados => 
  rendeUmLitro = 3; //metros
  lataDeTinta = 18; //litros
  resLitros = areaQuadrada/rendeUmLitro;  
  resLatas = resLitros / lataDeTinta;

  if(resLatas < 18) {
     printf("Litros: ", resLitros);
  };

  if(resLatas >= 18) {
    printf("Latas: ", resLatas);
  }

  //Quanto vou pagar? cada lata é 80reais => 
  if(resLitros > 54) {
    printf("A quantidade de latas a serem compradas é de %2.f e o total é de %2.f\n", resLatas, valorTotal);
  };
  if(resLitros > 0 && resLitros <=54) {
    printf("A quantidade de latas a serem compradas é de %2.f  e o total é de %2.f\n", resLatas, valorTotal);
  };

  return 0;
}