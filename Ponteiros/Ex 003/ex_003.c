#include <stdio.h>

void trocaValores(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {

  int num1;
  int num2;

  printf("Digite um numero: ");
  scanf("%i", &num1);

  printf("Digite outro numero: ");
  scanf("%i", &num2);

  int *prtNum1 = &num1;
  int *prtNum2 = &num2;

  trocaValores(prtNum1, prtNum2);

  printf("O valores foram trocados: o num1 agora e %i e o num2 e %i", num1, num2);

  return 0;
}