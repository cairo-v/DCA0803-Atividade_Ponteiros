#include <stdio.h>
#include <stdlib.h>

int **mC(int** a, int** b, int lA, int cA, int cB){
	
	int **matrizC
	int i;
	int j;
	int k;
	
	matrizC = malloc(lA * sizeof(int));
	
	for(i=0; i<cB; i++){
		matrizC[i] = malloc(cB * sizeof(int));
	}
	
	for(i=0; i<lA; i++){
		for(j=0; j<cB; j++){
			for(k=0; k<cA; k++){
				matrizC[i][j] = a[i][k] * b[k][j];
			}
		}
	}
	
	return matrizC;
}

int **matrizz(int lA, int cA, int cB){
	
	int i, j;
	int lB = cA;
	int **matrizA, **matrizB;
	
	matrizA = malloc(lA * sizeof(int));
	
	for(i=0; i<lA; i++){
		matrizA = malloc(cA * sizeof(int));
	}
	
	for(i=0; i<lA; i++){
		for(j=0; j<cA; j++){
			printf("Informe o elemento da linha %d e da coluna %d da matriz A: ", i+1, j+1);
			scanf("%d %d0", matrizA[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<lB; i++){
		matrizB = malloc(cB * sizeof(int));
	}
	
	for(i=0; i<lB; i++){
		for(j=0; j<cB; j++){
			printf("Informe o elemento da linha %d e da coluna %d da matriz B: ", i+1, j+1);
			scanf("%d %d0", matrizB[i][j]);
		}
	}
	
	return mC(matrizA, matrizB, lA, cA, cB);
}	
int main (){
	
	int lA, cA, lB, cB;
	int i, j;
	int matrizR;
	
	printf("Informe o numero de linhas da matriz A: ");
	scanf("%d", &lA);
	printf("\nInforme o numero de colunas da matriz A: ");
	scanf("%d", &cA);
	printf("\nInforme o numero de linhas da matriz B: ");
	scanf("%d", &lB);
	printf("\nInforme o numero de colunas da matriz B: ");
	scanf("%d", &cB);
	
	matrizR = matrizz(lA, cA, cB);
	
	for(i=0; i<lA; i++){
		for(j=0; j<cB; j++){
			printf("%d", matrizR[i][j]);
		}
	}
	free(matrizR);
	
	return 0;
}	
