#include <stdio.h>

int main (){
	
	int mat[4], *p, x;
	int i;
	
	for(i=0; i<4; i++){
		mat[i] = i + 1;
	}
	for(i=0; i<4; i++){
		printf("%d, ", mat[i]);
	}
	
	p = mat + 1 ;
	x = (*mat);
	
	printf("\n");
	printf("p = %p \n", p);
	printf("x = %d", x);
	
	return 0;
}

//Supondo que os acentos sejam erros de digita��o todas as op��es rodam, por�m, caso na� for, a 3� op��o se torna inv�lida devido o acento estar no c�digo,
//diferente das outras op��es que est�o ap�s o ";".
