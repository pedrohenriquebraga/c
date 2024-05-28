#include <stdio.h>

int main()
{

  int array[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Escreva o %i numero: ", i + 1);
    scanf("%i", &array[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    if (array[i] % 2 == 0)
    {
      printf("%i e um numero par e seu endereco e %p\n", array[i], &array[i]);
    }
  }

  return 0;
}