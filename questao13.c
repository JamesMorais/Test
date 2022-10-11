#include <stdio.h>

int inverter(int n, int *vet){
    int compv[4];
    for(int j = 4,i = 0; i <= 4; i++,j--){
        compv[i] = vet[j];
      
    printf("%d ", compv[i]);
    }
    return inverter;
}

int main(){
  int vetor[5];
  
  printf("insira os números:\n");
    
  for(int j = 0; j < 5; j++){
    scanf("%d", &vetor[j]);
  }
//vetor
  for(int i = 0; i < 5; i++){
    printf("%d", vetor[i]);
  }
  
  printf("Agora invertendo os números inseridos: ");
  return inverter(5, vetor );
  

  return 0;
}