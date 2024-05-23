#include <stdio.h>
#include <stdbool.h>

int main()
{

  int count = 0;
  int soma = 0;

  while (true)
  {
    int novoNum;

    printf("Digite o %d numero (0 para parar): ", count + 1);
    scanf("%d", &novoNum);

    if (novoNum == 0) {
      break;
    }

    soma = soma + novoNum;
    count++;
  }

  printf("A soma total dos numeros digitados e %d", soma);

  return 0;
}
