#include <stdio.h>

typedef struct {
  int *array;
  size_t used;
  size_t size;
} Array;

void initArray(Array *a, size_t initial_size) {
  a -> array = malloc(initial_size * sizeof(int));
  a -> used = 0;
  a -> size = initial_size;
};

void appendArray(Array *a, int element) {
  if (a -> used == a -> size) {
    a -> size *= 2;
    a -> array = realloc(a->array, a->size * sizeof(int));
  }
  a->array[a->used++] = element;
}

void clearArray(Array *a) {
  free(a->array);
  a->array = NULL;
  a->used = a->size = 0;
}

int main(int argc, char const *argv[]) {

  Array a;

  // Cria um array dinâmico que se inicia com 5 espaços na memória
  initArray(&a, 5);

  return 0;
}
