#include <stdio.h>
#include <stdlib.h>

int *soma (int *v1, int *v2, int x){            //Função para a soma dos vetores
	
	int i;
	int *v3 = malloc(x * sizeof(int));
	
	for(i=0; i<x; i++){
		v3[i] = v1[i] + v2[i];
	}
	
	free(v2);
	free(v1);
	
	return v3;
}

int vcont (int t1, int t2){                     //Função para a contagem dos elementos dos vetores 
	
	int i;
	int x;
	
	if(t1 > t2){
		x = t1;
	} else{
		x = t2;
	}
	
	int *v1 = malloc(x * sizeof(int));
	int *v2 = malloc(x * sizeof(int));
	
	for(i=0; i<x; i++){
		v1[i] = 0;
		v2[i] = 0;
	}
	
	for(i=0; i<t1; i++){
		printf("Informe o elemento %d do vetor 1: ", i + 1);
		scanf("%d", &v1[i]);
	}
	for(i=0; i<t2; i++){
		printf("Informe o elemento %d do vetor 2: ", i + 1);
		scanf("\n %d", &v2[i]);
	}
	
	return soma(v1, v2, x);
}

int main (){                                    //Função principal       
	
	int t1, t2;
	int i;
	
	printf("Informe o tamanho do vetor 1: ");
	scanf("%d", &t1);
	printf("\n");
	printf("Informe o tamanho do vetor 2: ");
	scanf("%d", &t2);
	printf("\n");
	
	int *v3 = vcont(t1, t2);
	
	for(i=0; v3[i]; i++){
		printf9("%d", v3[i]);
	}
	free(v3);
	
	return 0;
}
