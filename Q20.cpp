#include <stdio.h>
#include <stdlib.h>
#include "gc/gc.h"
#include <time.h>

int main(int argc, char **argv){
	
	clock_t tempo,t;
    int i;
    tempo = clock();
    int *k = malloc(250 * sizeof(int));         //250 é o menor tempo para armazenar mais variáveis
    
    for(i=0; i<250; i++){
    	k[i]= 20;
	}
	free(k);
	
	tempo = clock() - tempo;
    t = clock();
    int *j = GC_MALLOC(250 * sizeof(int));
    
    for(i=0; i<250; i++){
    	j[i] = 20;
	}
	
	t = clock() - t;
	printf("O tempo do GC_MALLOC é : %lf \nO tempo do malloc é: %lf", (double)t/(CLOCKS_PER_SEC/1000),(double)tempo/(CLOCKS_PER_SEC/1000));
	
	return 0;
}
