#include <stdio.h>

int ranint(int min, int max) {
  return (rand() % (max - min + 1)) + min;
}

int main() {

  srand(time(NULL));

  // Gera um número entre 1 e 6
  int numAleatorio = ranint(1, 6);
  int numEscolhido;
  printf("Pensei em um numero entre 1 e 6. Qual numero e esse? -> ");
  scanf("%d", &numEscolhido);

  if (numAleatorio == numEscolhido) {
    printf("Parabens! Voce acertou.");
  } else {
    printf("Que pena! eu pensei no numero %d", numAleatorio);
  }

  return 0;
}