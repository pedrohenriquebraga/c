#include <stdio.h>

int main() {

  float nota1;
  float nota2;
  float nota3;

  printf("----- BEM-VINDO -----\n\n");

  printf("Digite a nota 1: ");
  scanf("%f", &nota1);

  printf("Digite a nota 2: ");
  scanf("%f", &nota2);

  printf("Digite a nota 3: ");
  scanf("%f", &nota3);

  float media = (float) (nota1 + nota2 + nota3) / 3;

  printf("Sua media e de %.2f\n", media);
  
  if (media >= 6) {
    printf("VOCE ESTA APROVADO, PARABENS!");
  } else if (media >= 3) {
    printf("TOME CUIDADO, VOCE ESTA DE RECUPERACAO!");
  } else {
    printf("QUE PENA, VOCE ESTA REPROVADO!");
  }

  return 0;
}