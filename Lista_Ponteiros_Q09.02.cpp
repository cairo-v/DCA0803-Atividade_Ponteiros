#include<stdio.h>
#include<stdlib.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i); //Mostra o endereço de memória em que cada elemento do vetor está guardado
  }
}
