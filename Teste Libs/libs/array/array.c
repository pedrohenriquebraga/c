#include <stdio.h>
#include <stdlib.h>
#include "array.h"

// Inicia o array com um tamanho inicial autoincremental
void initArray(Array *a, size_t initialSize) {
    a -> array = malloc(initialSize * sizeof(int));
    a -> size = initialSize;
    a -> used = 0;

    if (a -> array == NULL) {
      printf("Nao foi possivel iniciar o array (possivelmente por falta de memoria)");
      exit(0);
    }

    printf("O array foi iniciado com sucesso!\n");
}

// Adiciona um valor ao final do array. Caso não haja espaço na memoria, o programa aloca mais espaço
// automaticamente
void appendArray(Array *a, int value) {

   if (a -> size == a -> used) {
      a -> size *= 2;
      a -> array = realloc(a -> array, a -> size * sizeof(int));
   }

   a -> array[a -> used++] = value;
}

//Limpa o array da memória
void freeArray(Array *a) {
   free(a -> array);

   a -> array = NULL;
   a -> used = a -> size = 0;

   printf("\nA memoria foi limpa com sucesso!");
}

void printArray(Array *a) {
   for (int i = 0; a -> used > i; i++) {
      printf("%i  ", a -> array[i]);
   }
   printf("\n");
}
