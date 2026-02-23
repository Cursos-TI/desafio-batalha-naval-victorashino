#include <stdio.h>

int main() {
  
  int tabuleiro[10][10] = {0};

  int linhaH = 2;
  int colunaH = 4;

  for (int i = 0; i < 11; i++) {
    tabuleiro[i][0] = i;
  }

  if (colunaH + 3 <= 10) {

      int podeColocar = 1;

      for (int i = 0; i < 3; i++) {
          if (tabuleiro[linhaH][colunaH + i] != 0) {
              podeColocar = 0;
              break;
          }
      }

      if (podeColocar) {
          for (int i = 0; i < 3; i++) {
              tabuleiro[linhaH][colunaH + i] = 3;
          }
      }
  }

  int linhaV = 2;
  int colunaV = 5;

  if (linhaV + 3 <= 10) {

      int podeColocar = 1;

      for (int i = 0; i < 3; i++) {
          if (tabuleiro[linhaV + i][colunaV] != 0) {
              podeColocar = 0;
              break;
          }
      }

      if (podeColocar) {
          for (int i = 0; i < 3; i++) {
              tabuleiro[linhaV + i][colunaV] = 3;
          }
      }
  }

  printf("  A B C D E F G H I \n");
  for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
          printf("%d ", tabuleiro[i][j]);    
      }
      printf("\n");
  }

  return 0;
}

