#include <stdio.h>

int main() {

  char nome[50];
  int idade;

  printf("Qual seu nome? -> ");
  scanf("%s", &nome);

  printf("Prazer %s! Qual sua idade? -> ", nome);
  scanf("%d", &idade);

  if (idade <= 18) {
    printf("Nossa que jovem! Foi um prazer te conhecer %s", nome);
  } else {
    printf("Foi um prazer te conhecer %s", nome);
  }

  return 0;
}