#include <stdio.h>

int main() {
  int x,y,sum;

  printf("Digite um número:");
  scanf("%d", &x);
  printf("Digite outro numero:");
  scanf("%d", &y);
  sum = x + y;
  printf("Resultado: %d\n", sum);

  return 0;
}