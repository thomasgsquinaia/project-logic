//19 - Faça um Programa que peça dois números e imprima o maior deles.

#include <stdio.h>

int main() {
  float n1, n2;
  int n = 1;

  while (n != 0) {
      printf(" =========== Digite o número 0 para parar após digitar dois numeros ou mais!! ===========\n");
      printf("Digite um número: \n");
      scanf("%f", &n1);
      printf("Digite outro número: \n");
      scanf("%f", &n2);

    if(n1 > n2 && n2 < n1) {
      printf("O primeiro número %2.f é o maior número digitado!", n1);
      printf(" =========== Digite o número 0 para parar após digitar dois numeros ou mais!! ===========\n");

    }

    if(n1 < n2 && n2 > n1) {
      printf("O segundo número %2.f é o maior número digitado!", n2);
      printf(" =========== Digite o número 0 para parar após digitar dois numeros ou mais!! ===========\n");
    }
    n++;
  }

  // if(n1 == n2) { 
  //   printf("Os números são iguais");
  // }
  
  return 0;
}