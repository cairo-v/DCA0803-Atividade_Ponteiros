#include<stdio.h>
#include<stdlib.h>

int main (){
	int vet[] = {4,9,13};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(vet+i)); //Imprime os valores guardados em cada posição do vetor (4, 9, 13)
  	}
	
	return 0;
}
