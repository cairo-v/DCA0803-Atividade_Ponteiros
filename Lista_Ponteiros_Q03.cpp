#include<stdio.h>
#include<stdlib.h>

int main (){
	int i=5, *p;
	p = &i;
	printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
	
	printf("\n%x", p); //Imprimir� o endere�o da mem�ria de i na base hexadecimal;
	printf("\n%d", *p+2); //Imrpimir� o conte�do de i apontado por p acrescido de 2 unidades;
	printf("\n%d", **&p); //Imrpimir� o conte�do de i apontado por p;
	printf("\n%d", 3**p); //Imrpimir� o conte�do de i apontado por p multiplicado por 3;
	printf("\n%d", **&p+4); //Imrpimir� o conte�do de i apontado por p acrescido de 4 unidades;
	
	return 0;
}
