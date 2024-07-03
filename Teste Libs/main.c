#include <stdio.h>
#include <stdlib.h>
#include "./libs/array/array.h"

int main() {

   Array notas;

   initArray(&notas, 5);

   int count = 0;
   float media = 0;

   while (1) {

      int nota;

      printf("Digite a nota %i (999 para finalizar): ", count + 1);
      scanf("%i", &nota);

      if (nota == 999) {
         break;
      }

      if (nota > 10 || nota < 0) {
         printf("A nota deve ser um numero entre 0 e 10\n");
      } else {
         appendArray(&notas, nota);
         count++;
      }

   }

   for (int i = 0; i < notas.used; i++) {
      media += notas.array[i];
   }

   media = (float) media / notas.used;

   printf("As notas digitadas foram: ");
   printArray(&notas);
   printf("A media do aluno e de %.2f", media);

   freeArray(&notas);

   return 0;
}
