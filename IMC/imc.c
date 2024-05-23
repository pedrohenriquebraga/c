#include <stdio.h>

int main(){

  float altura;
  float peso;

  printf("Qual seu peso? -> ");
  scanf("%f", &peso);

  printf("Qual sua altura? -> ");
  scanf("%f", &altura);

  float imc = (float) peso / (altura * altura);

  printf("Seu IMC e de %.2f", imc);

  return 0;
}