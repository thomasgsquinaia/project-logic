//22 - Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <ctype.h>
int main() { 
  char letra;

  printf("Digite uma letra para sabermos se ela é vogal ou consoante: ");
  scanf("%c", &letra);
  letra=toupper(letra);

  if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') { 
    printf("Vogal");
  }
  else {
    printf("Consoante");
  }
  
  return 0;
}