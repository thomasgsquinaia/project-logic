//Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
//Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.


#include <stdio.h>

int main() {
  char genero;

  printf("Digite M para Masculino ou F para Feminino: ");
  scanf("%c", &genero);
 
  if(genero == 'M' || genero == 'm') {
    printf("M - Masculino");
  }
  if(genero == 'F' || genero == 'f') {
    printf("F - Feminino");
  }

  return 0; 
}

