#include <stdio.h>

int main() {
  int array[5];

  for (int i = 0; i < 5; i++) {
    printf("Escreva o %i numero: ", i + 1);
    scanf("%i", &array[i]);
  }

  for (int i = 0; i < 5; i++) {
    int *prtElemento = &array[i];
    *prtElemento = *prtElemento * 2;
    printf("O dobro do elemento %i e %i\n", i + 1, *prtElemento);
  }
}