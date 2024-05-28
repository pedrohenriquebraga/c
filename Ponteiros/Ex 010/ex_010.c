#include <stdio.h>
#include <string.h>

int buscarPalavra(char *frase, char *palavra)
{
  int fraseLen = strlen(frase);
  int palavraLen = strlen(palavra);

  int i, j = 0;

  while (i < fraseLen && j < palavraLen)
  {
    if (frase[i] != palavra[j])
    {
      i = i - j + 1;
      j = 0;
    }
    else
    {
      i++;
      j++;
    }
  }

  return j == palavraLen;
}

int main()
{

  char str1[100];
  char str2[50];

  printf("Digite uma frase: ");
  gets(str1);

  printf("Agora digite uma palavra: ");
  gets(str2);

  int resultado = buscarPalavra(str1, str2);

  if (resultado) {
    printf("A substring '%s' esta contida na frase '%s'\n", str2, str1);
  } else {
    printf("A substring '%s' nao esta contida na frase '%s'\n", str2, str1);
  }

  return 0;
}