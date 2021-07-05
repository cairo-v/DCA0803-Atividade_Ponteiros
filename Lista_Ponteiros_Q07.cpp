#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int pulo[10];
	int *px, i; 
	px = pulo;
	
	for(i=0; i<10; i++){
		px[i] = i + 1;
	}
	for(i=0; i<10; i++){
		printf("%d, ", *(px + i));
	}
		
	printf("\n");
	printf("*px = %d \n", *px);
	printf("px = %p \n", *px);
	printf("px = %p \n", px + 2);
	printf("*px = %d \n", *(px + 2));        //Valor com o 3° elemento
	return 0;
}
