#include <stdio.h>
#include <string.h>

int main() {
  char frase[101];
  char letra;
  int quantidadeLetra, i, lenFrase;

  printf("Escreva uma frase de ate 100 caracteres: ");
  gets(frase);

  lenFrase = strlen(frase);

  if (lenFrase > 100) {
    printf("Poxa! Sua frase tem mais de 100 caracteres. Escreva outra frase menor.");
    return 0;
  }

  printf("Boa! Agora escolha uma letra para que eu possa contar quantas vezes ela aparace: ");
  scanf("%s", &letra);

  i = 0;
  quantidadeLetra = 0;

  while (i <= lenFrase) {
    if (frase[i] == letra) {
      quantidadeLetra++;
    }
    i++;
  }

  printf("A letra '%c' apareceu %d vezes na frase", letra, quantidadeLetra);
}