/*Respostas - Supondo que x esteja armazenado no endereço de memória 4092:
         X + 1	  X + 2	  X + 3
char 	: 4093    4094    4095		
int	: 4094    4096    4098		
float 	: 4096    4100    4104		
double	: 4100    4108    4116		

Código para exemplificar:*/

#include <stdio.h>

int main (){
	
	int x[4]; 
	int *px;
	int i;
	int element;
	
	for(i=0; i<4; i++){
		x[i] = i + 1;
	}
	for(i=0; i<4; i++){
		printf("%d, ", x[i]);
	}
	
	printf("\n");
	printf("Escolha qual elemento deseja consultar o endereco de memoria (1 a 4): ");
	scanf("%d", &element);
	
	for(i=0; i<4; i++){
		px = &x[element];
	}
	
	printf("\n");
	printf("Encontra-se no endereco de memoria: %d \n", px);
	
	return 0;
}
