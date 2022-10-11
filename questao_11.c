#include <stdhio.h>
int negativos(int n, float*vet){
  int numNegativo = 0;
  for(int j = 0; j < n; j++){
    if(vet[j]<0){
      numNegativo = numNegativo + 1;
    }
  }
  return numNegativo;
}
int main(){
  int j;
  float vetor[9];
  printf("Digite os elementos pertencentes ao vetor:\n");
  for(j = 0; j<9; j++){
    scanf("%f", &vetor[j]);
  }
  printf("Série:")
    for(j = 0; j < 9; j++){
    printf("%2.f", vetor[j])
    }
  printf("\n %d Os números negativos são: ", negativos(9, vetor));
  return 0;
}