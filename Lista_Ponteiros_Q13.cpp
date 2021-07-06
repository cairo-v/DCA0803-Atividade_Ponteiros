#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float *vetor;
	int i, j, qnte_comp;
	float aux;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o número de coponentes desejados: ");	
	scanf("%d", &qnte_comp);
	
	vetor = (float*) malloc(qnte_comp * sizeof(float));
	
	for (i=0; i < qnte_comp; i++)
	{
		printf("Digite o valor para a posição %d do vetor: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	
	//Ordenando o vetor e fazendo a impressão:
	
	for(i=0; i < qnte_comp; i++)
	{
		for(j=0; j < qnte_comp; j++)
		{
			if(vetor[i] < vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
	//Escrevendo os vetores ordenados:
	
	printf("Valores em ordem crescente:\n");
	for(i = 0; i < qnte_comp; i++)
	{
		printf("\nVetor[%d]: %2.f", i+1, vetor[i]);
	}
	
	return 0;
}
