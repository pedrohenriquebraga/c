#include <stdio.h>

void dobrar(int *num) {
  *num = *num * 2;
}

void somarODobro(int *a, int *b, int *soma) {
  dobrar(a);
  dobrar(b);
  *soma = *a + *b;
}

int main() {

  int num1;
  int num2;
  int soma;

  printf("Digite o primeiro numero: ");
  scanf("%i", &num1);

  printf("Digite o segundo numero: ");
  scanf("%i", &num2);

  int *ptrNum1 = &num1;
  int *ptrNum2 = &num2;
  int *ptrSoma = &soma;

  somarODobro(ptrNum1, ptrNum2, ptrSoma);

  printf("O dobro dos numeros, respectivamente, e: %i e %i\n", num1, num2);
  printf("A soma dos dois numero e %i", soma);

  return 0;
}