#include <stdio.h>

void trocarVariaveis(int *a, int *b) {
  if (*a > *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
  } else {
    int temp = *b;

    *b = *a;
    *a = temp;
  }
}

int main() {

  int var1;
  int var2;

  printf("Digite o primeiro numero: ");
  scanf("%i", &var1);

  printf("Digite o segundo numero: ");
  scanf("%i", &var2);

  int *ptrVar1 = &var1;
  int *ptrVar2 = &var2;

  trocarVariaveis(ptrVar1, ptrVar2);

  printf("A var1 foi atribuida com o numero %i e a var2 com o numero %i", var1, var2);

  return 0;
}