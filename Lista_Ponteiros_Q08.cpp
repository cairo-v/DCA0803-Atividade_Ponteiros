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

//Supondo que os acentos sejam erros de digitação todas as opções rodam, porém, caso naõ for, a 3° opção se torna inválida devido o acento estar no código,
//diferente das outras opções que estão após o ";".
