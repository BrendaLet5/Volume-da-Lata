// calcular o volume da lata de óleo cilindrica, a partir da leitura do raio da base e da altura
#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main(void) {
  float raio,volume,altura=0;
  volume= pi*pow(raio,2)*altura;
  printf("Digite o raio da base do cilindro: ");
  scanf("%f",&raio);
  printf("Digite a altura do cilindro: ");
  scanf("%f",&altura);
  printf("O volume do cilindro é: %.2f",volume);
  return 0;
}