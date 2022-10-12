#include <stdio.h>

// Função para saber quantos valores são negativos
int negativos(int n, float *vet) {
  int numNegativo = 0;
  int i = 0;
  while (i < n){

    if (vet[i] < 0) {
      numNegativo = numNegativo + 1;
  }
  i++;
}
return numNegativo;
}
// Função Principal
int main() {
  int i = 0;
  float vetor[5];
  printf("Digite os elementos pertencentes ao vetor:\n");
  while (i < 5) {
    scanf("%f", &vetor[i]);
    i++;
  }
  while (i < 5) {
    printf("%2.f", vetor[i]);
    i++;
  }
  printf("Os números negativos são: ");
  printf("%d \n", negativos(5, vetor));

  return 0;
}