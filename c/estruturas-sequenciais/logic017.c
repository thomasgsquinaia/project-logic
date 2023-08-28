//18- Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), 
//calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include <stdio.h>

int main() {
  float sizeFile, speedInternet, timeOfDownload, timeMinute; 
  printf("digite o tamanho do arquivo para download: ");
  scanf("%f", &sizeFile);
  printf("Digite a velocidade da internet em Mbps(Mega bits por segungo):");
  scanf("%f", &speedInternet);

  // sizeFile recebe em MB e devemos passar pra MegaBits(Mb).
  timeOfDownload = (sizeFile*8.0) / speedInternet;//o 8 é o o calculo passado pra megabits
  timeMinute = timeOfDownload/60;
  printf("O tempo aproximado de download é de %2.f segundos, %2.f minutos\n", timeOfDownload, timeMinute);


  return 0;
}
