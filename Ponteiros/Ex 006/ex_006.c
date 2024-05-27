#include <stdio.h>

int main() {
  
  float array[10] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.10, 10.11};

  for (int i = 0; i < 10; i++) {
    printf("Endereco %i: %p\n", i, &array[i]);
  }

  return 0;
}