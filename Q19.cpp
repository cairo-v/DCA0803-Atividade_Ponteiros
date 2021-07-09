#include <stdio.h>
#include <stdlib.h>
#include <gc/gc.h>

int main (){
	
	int i;
	int *k = GC_MALLOC(2 * sizeof(int)); 
	
	for(i=0; i<20; i++){
		k[i] += i;
	} 
	
	for(i=0; i<2; i++){
		printf("%d", k[i]);
	}
	
	return 0;
}
