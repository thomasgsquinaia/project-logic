// 17 - Faça um Programa para uma loja de tintas.

// O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
// Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros,
// que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
// Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:

// comprar apenas latas de 18 litros;
// comprar apenas galões de 3,6 litros;
// misturar latas e galões, de forma que o preço seja o menor.
//     Acrescente 10% de folga e sempre arredonde os valores para cima,
//     isto é, considere latas cheias.

#include <stdio.h>
#include <math.h>

int main()
{
  float area, areaMaisDez, precoLatasEgaloes,precoLatas,sumLitros, qtdLatasBig, qtdLatasSmall, valorLata, valorGalao, rendimentoLata, rendimentoGalao, galoes, latas, precoLata, precoGalao;
  // QUARTA PROPORCIONAL
  // 1 LITRO ----------- 6 METROS
  // X LITRO ----------- areaQuadrada
  // 1 lata de 18 litros cobre 6mx18l=108metro2  -- lata 18 litros custa 80 din e o galao de 3,6 litros custa 25 din.

  printf("Digite a area em metros quadrados a ser pintada: ");
  scanf("%f", &area);
  areaMaisDez = area * 1.1;
  rendimentoLata = 6 * 18;
  rendimentoGalao = 6 * 3.6;
  // litragem tanto de latas de 18L quanto de galões de 3.6L
  sumLitros = areaMaisDez / 6.00;
  qtdLatasBig = sumLitros / 18.00;
  qtdLatasSmall = sumLitros / 3.60;

  // Valor de latas de 18L quanto de galões de 3.6L
  valorLata = qtdLatasBig * 80.0;
  valorGalao = qtdLatasSmall * 25.0;

  latas = areaMaisDez / rendimentoLata;
  galoes = (((int)areaMaisDez % (int)rendimentoLata) / rendimentoGalao);
  precoLatas = latas * 80;
  precoGalao = galoes * 25;

  precoLatasEgaloes = precoLatas + precoGalao;

  printf("Somente Latas:%2.f, custando R$:%2.f\n", qtdLatasBig, valorLata);
  printf("Somente Galões:%2.f, custando R$:%2.f\n", qtdLatasSmall, valorGalao);
  printf("Latas:%2.f ,Galões:%2.f, custando R$:%2.f\n", latas, galoes, precoLatasEgaloes);
  return 0;
}