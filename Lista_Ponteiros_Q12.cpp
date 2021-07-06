//O uso de ponteiros para funções em C revolucionou pois essa ferramenta serve para estabelecer, em tempo de execução, quando e qual função será executada, sem que seja
//necessário de escrever o nome da função naquela linha do código. Pois, a definição de qual função será executada é feita em um outro ponto do código, fazendo o ponteiro
//apontar para a função desejada.

//Código de troca de 2 variavéis para exemplificar:

#include <stdio.h>

void troca (int *x, int *y){
	
	int temp;
	
	printf("%d; %d \n", *x, *y); 
	temp = *x; *x = *y; *y = temp;
	printf("%d; %d \n", *x, *y);
}

int main (void){
	int var1 = 5, var2 = 8;
	printf("%d; %d \n", var1, var2);
	troca(&var1, &var2);
	printf("%d; %d \n", var1, var2);
	
	return 0;
}
