#include<stdio.h>
#include<stdlib.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i); //Mostra o endere�o de mem�ria em que cada elemento do vetor est� guardado
  }
}
