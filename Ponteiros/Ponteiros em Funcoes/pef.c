#include <stdio.h>

void somar(int *p, int soma) {
  printf("O endereco de p e %p\n", p);
  *p = *p + soma;
}

int main() {

  int num = 0;
  int *ptr = &num;

  printf("O valor atual de num e %i\n", num);

  somar(ptr, 10);

  printf("O novo valor de num e %i", num);

  return 0;
}