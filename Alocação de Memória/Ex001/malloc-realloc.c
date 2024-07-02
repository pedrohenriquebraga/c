#include <stdio.h>

typedef struct {
  int *array;
  size_t size;
  size_t used;
} Array;

void initArray(Array *a, size_t initial_size) {
  a -> array = malloc(initial_size * sizeof(int));
  a -> used = 0;
  a -> size = initial_size;
}

void appendArray(Array *a, int value) {
  if (a -> used == a -> size) {
    a -> size *= 2;
    a -> array = realloc(a -> array, a -> size * sizeof(int));
  }

  a -> array[a -> used++] = value;
}

void freeArray(Array *a) {
  free(a -> array);
  a -> array = NULL;
  a -> used = a -> size = 0;
  printf("Memoria limpa com sucesso!");
}

void fillArray(Array *a, int amount) {
  for (int i = 0; i < amount; i ++) {
    appendArray(a, i + 1);
  }
}

void printArray(Array *a) {
  for (int i = 0; i < a->used; i++) {
    printf("%i  ", a->array[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[])
{
  
  Array a;
  int arraySize;
  
  printf("Digite o tamanho desejado do array: ");
  scanf("%i", &arraySize);

  initArray(&a, arraySize);
  fillArray(&a, arraySize);

  printf("Elementos do array:\n");
  printArray(&a);

  freeArray(&a);

  return 0;
}
