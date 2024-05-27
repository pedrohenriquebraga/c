#include <stdio.h>

int main()
{

  int inteiro = 0;
  float real = 5.5;
  char caracter = 'B';

  int *prtInteiro;
  float *ptrReal;
  char *ptrCaracter;

  prtInteiro = &inteiro;
  ptrReal = &real;
  ptrCaracter = &caracter;

  printf("Os valores agora sao: %i, %f, %c\n", inteiro, real, caracter);

  *prtInteiro = 10;
  *ptrReal = 8.9;
  *ptrCaracter = 'A';

  printf("Os valores agora sao: %i, %f, %c\n", inteiro, real, caracter);

  return 0;
}