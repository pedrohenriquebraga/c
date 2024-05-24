#include <stdio.h>
#include <stdbool.h>

int main() {
  int estoque[5][5] = {{150, 0, 100, 150, 200},
                       {200, 300, 230, 100, 90},
                       {250, 300, 0, 200, 150},
                       {300, 100, 90, 450, 0},
                       {350, 300, 400, 250, 200}};

  int armazem, produto, quantidade;

  while (true) {

    printf("===== ESTOQUE =====\n");

    for (int linha = 0; linha < 5; linha++) {
      printf("\n");
      printf("[ Armazem %d ] ", linha);

      for (int col = 0; col < 5; col++) {
        printf("%d ", estoque[linha][col]);
      }
    }
    printf("\n\n");

    printf("Para comecar, escolha em qual armazem voce quer pegar o produto (-1 para finalizar): ");
    scanf("%i", &armazem);

    if (armazem == -1)
    {
      break;
    }

    printf("Agora escolha o produto que voce deseja comprar: ");
    scanf("%i", &produto);

    printf("Boa! agora escolha a quantidade que voce quer do produto: ");
    scanf("%i", &quantidade);

    int produtoSelecionado = estoque[armazem][produto];

    if (quantidade > produtoSelecionado)
    {
      printf("Estoque com quantidade insuficiente para atender ao pedido\n\n");
    }
    else
    {
      estoque[armazem][produto] = produtoSelecionado - quantidade;
      printf("Voce obteve %d unidades do produto %d, obrigado!\n\n", quantidade, produto);
    }

  }

  printf("===== OBRIGADO, VOLTE SEMPRE =====");

  return 0;
}