#include <stdio.h>

int main() {

  int numFatorial;
  int resultado = 1;

  printf("Escolha um numero: ");
  scanf("%d", &numFatorial);

  if (numFatorial == 0) {
    printf("O fatorial do numero 0 e 1");
    return 0;
  } 

  for (int i = 1; i <= numFatorial; i++) {
    resultado = resultado * i;
  }

  printf("O fatorial do numero %d e %d", numFatorial, resultado);

  return 0;
}