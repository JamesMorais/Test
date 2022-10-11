#include <stdio.h>
int pares(int n, int*vet){
  int numeros_pares = 0;
  for(int i= 0; i < n; i++){
    if((vet[i]%2) == 0){
      numeros_pares+=1;
    }
  }
  return numeros_pares;    
}
int main(){
  int vetor[5];
  printf("Digite os números: ");
  for(int i = 0; i < 5 ; i++){
    scanf("%d", &vetor[i]);
  }
  printf("\nVetor:\n");
  for(int i = 0; i < 5; i++){
    printf("%d", vetor[i]);
  }
  printf("%d Os números pares são:", pares(5, vetor));
  
  return 0;
}