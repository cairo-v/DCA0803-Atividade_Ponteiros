#include<stdio.h>
#include<stdlib.h>

int main (){
	int i=3,j=5, temp, temp2;
	int *p, *q;
	p = &i;
	q = &j;
			 
	p == &i;
	temp = (*p - *q);
	**&p;
	temp2 = (3 - *p/(*q) + 7);
 	
	
	printf("Primeiro caso(p == &i): %d", p); //Resposta: 6487564
	printf("\n");
	system("pause");
		
	printf("\nSegundo caso(*p - *q): %d", temp); //Resposta: -2
	printf("\n");
	system("pause");
	
	printf("\nTerceiro caso(**&p): %d", **&p); //Resposta: 3
	printf("\n");
	system("pause");	
	
	printf("\nQuarto caso(3 - *p/(*q) + 7): %d", temp2); //Resposta: 10
	printf("\n");
	system("pause");

	return 0;
}

