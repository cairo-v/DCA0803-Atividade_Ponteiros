#include<stdio.h>
#include<stdlib.h>

int main (){
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	
	aloha[2] = value; //V�lido
	scanf("%f", &aloha); // INV�lIDO
	aloha = "value"; // INV�lIDO
	printf("%f", aloha); //V�lido
	coisas[4][4] = aloha[3]; //V�lido
	coisas[5] = aloha; // INV�lIDO
	pf = value; // INV�lIDO
	pf = aloha; //V�lido
	
	return 0;
}
