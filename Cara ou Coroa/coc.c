#include <stdio.h>
#include <windows.h>

int main() {

  srand(time(NULL));

  int isCara = rand() % 2;

  printf("Girando a moeda...\n");
  sleep(3);

  if (isCara) {
    printf("E cara!");
  } else {
    printf("E coroa!");
  }

  return 0;
}