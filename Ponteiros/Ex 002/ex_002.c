#include <stdio.h>

int main() {

  int num1 = 10;
  int num2 = 20;

  printf("Endereco do num1: %p\n", &num1);
  printf("Endereco do num2: %p\n", &num2);

  if (&num1 > &num2) {
    printf("O endereco do num1 e maior\n");
  } else {
    printf("O endereco do num2 e maior\n");
  }

  if (num1 > num2) {
    printf("O num1 e maior que o num2\n");
  } else {
    printf("O num2 e maior que o num1\n");
  }

  return 0;
}