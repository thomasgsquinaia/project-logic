//032 - Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média.
//A atribuição de conceitos obedece à tabela abaixo: Média de Aproveitamento 
//Conceito Entre 9.0 e 10.0 A 
//Entre 7.5 e 9.0 B 
//Entre 6.0 e 7.5 C 
//Entre 4.0 e 6.0 D 
//Entre 4.0 e zero E
//O algoritmo deve mostrar na tela as notas, a média, 
//o conceito correspondente e a mensagem: 
// “APROVADO” se o conceito for A, B ou C 
//“REPROVADO” se o conceito for D ou E.

#include <stdio.h>

int main() {
  float n1, n2, media;
  char conceito;

  printf("Digite a nota 1: ");
  scanf("%f", &n1);
  printf("Digite a nota 2: ");
  scanf("%f", &n2);
  media = (n1 + n2) / 2;

  if (media >= 9.0 && media <= 10.0) {
      conceito = 'A';
  }
  else if(media >= 7.5 && media <= 9.0) {
      conceito = 'B';
  }
  else if(media >= 6.0 && media <= 7.5) {
      conceito = 'C';
  }
  else if(media >= 4.0 && media <= 6.0) {
      conceito = 'D';
  }
  else if (media >= 4.0 && media == 0.0) { 
      conceito = 'E';
  }
  else { 
    printf("Erro em algum if");
  }

  if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
    printf("APROVADO Aproveitamento: %c\n", conceito);
  }
  else { 
    printf("REPROVADO Aproveitamento: %c\n ", conceito);
  }

  printf("======================\n");
  printf("nota 1: %2.f\n", n1);
  printf("nota 2: %2.f\n", n2);
  printf("média: %2.f\n", media);
  printf("======================");
}

