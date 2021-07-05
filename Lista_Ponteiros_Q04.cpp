#include<stdio.h>
#include<stdlib.h>

int main (){
	int i=2, j=8, *p, *q;
	
	p = &i; 
	*q = &j; //ILEGAL
	p = &*&i;
	i = (*&)j; //ILEGAL
	i = *&j;
	i = &&j; //ILEGAL
	q = *p; //ILEGAL
	i = (*p)` + *q; //ILEGAL(erro de digitação);
	
	printf("p = &i %x", p);
	printf("p = &i %d", p);

	
	return 0;
}
