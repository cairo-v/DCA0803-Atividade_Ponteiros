//O uso de ponteiros para fun��es em C revolucionou pois essa ferramenta serve para estabelecer, em tempo de execu��o, quando e qual fun��o ser� executada, sem que seja
//necess�rio de escrever o nome da fun��o naquela linha do c�digo. Pois, a defini��o de qual fun��o ser� executada � feita em um outro ponto do c�digo, fazendo o ponteiro
//apontar para a fun��o desejada.

//C�digo de troca de 2 variav�is para exemplificar:

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
