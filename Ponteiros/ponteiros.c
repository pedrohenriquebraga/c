#include <stdio.h>

int main() {

  int num = 5;
  int *ptr;

  // Armazenando endereço da váriavel num no ponteiro ptr
  ptr = &num;

  // Formas de acessar o endereço da váriavel num
  printf("O endereco da variavel num e %p\n", ptr);
  printf("O endereco da variavel num e %p\n", &num);

  // Formas de acessar os valores de num
  printf("O valor de num e %i\n", num);
  printf("O valor de num e %i\n", *ptr);

  // Alterar o valor de num através do ponteiro
  *ptr = *ptr + 1;

  printf("Agora o valor de num e %i", num);

  return 0;
}