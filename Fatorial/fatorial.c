#include <stdio.h>

double calcularFatorial(int num)
{
  if (num == 1)
  {
    return 1;
  }
  else
  {
    return num * calcularFatorial(num - 1);
  }
}

int main()
{

  int num;

  printf("Escolha um numero: ");
  scanf("%d", &num);

  if (num == 0)
  {
    printf("O fatorial do numero 0 e 1");
    return 0;
  }

  printf("O fatorial do numero %d e %.0f", num, calcularFatorial(num));

  return 0;
}