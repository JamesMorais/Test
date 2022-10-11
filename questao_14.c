#include <stdio.h>
// Função para receber valores da matriz
void receber_valores(int matriz[2][2], int linha, int coluna) {
  for (linha = 1; linha <= 2; linha++) {
    for (coluna = 1; coluna <= 2; coluna++) {
      scanf("%d", &matriz[linha][coluna]);
    }
  }
}
// Função para Somar matrizes e mostrar o resultado
void somar_matrizes(int matrizA[2][2], int matrizB[2][2], int matrizR[2][2],
                    int linha, int coluna) {
  for (linha = 1; linha <= 2; linha++) {
    for (coluna = 1; coluna <= 2; coluna++) {
      matrizR[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
      printf("linha[%d] coluna[%d] = %d \n", linha, coluna,
             matrizR[linha][coluna]);
    }
  }
}
// Função para Subtrair matrizes e mostrar o resultado
void subtrair_matrizes(int matrizA[2][2], int matrizB[2][2], int matrizR[2][2],
                       int linha, int coluna) {
  for (linha = 1; linha <= 2; linha++) {
    for (coluna = 1; coluna <= 2; coluna++) {
      matrizR[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];
      printf("linha[%d] coluna[%d] = %d \n", linha, coluna,
             matrizR[linha][coluna]);
    }
  }
}
// Função Principal
int main() {
  int matrizA[2][2];
  int matrizB[2][2];
  int matrizR[2][2];
  int linha, coluna;

  printf("Digite os valores da matriz A:\n");
  receber_valores(matrizA, linha, coluna);
  printf("Digite os valores da matriz B:\n");
  receber_valores(matrizB, linha, coluna);

  somar_matrizes(matrizA, matrizB, matrizR, linha, coluna);
  printf("\n");
  subtrair_matrizes(matrizA, matrizB, matrizR, linha, coluna);

  return 0;
}