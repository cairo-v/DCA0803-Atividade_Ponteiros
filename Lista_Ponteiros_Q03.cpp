#include<stdio.h>
#include<stdlib.h>

int main (){
	int i=5, *p;
	p = &i;
	printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
	
	printf("\n%x", p); //Imprimirá o endereço da memória de i na base hexadecimal;
	printf("\n%d", *p+2); //Imrpimirá o conteúdo de i apontado por p acrescido de 2 unidades;
	printf("\n%d", **&p); //Imrpimirá o conteúdo de i apontado por p;
	printf("\n%d", 3**p); //Imrpimirá o conteúdo de i apontado por p multiplicado por 3;
	printf("\n%d", **&p+4); //Imrpimirá o conteúdo de i apontado por p acrescido de 4 unidades;
	
	return 0;
}
