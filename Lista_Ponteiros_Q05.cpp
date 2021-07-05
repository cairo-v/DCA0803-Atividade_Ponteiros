#include<stdio.h>
#include<stdlib.h>

int main() {
  int valor;
  int *p1;

  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("Letra a: %d \n", valor); //Resposta esperada: 20
  
  
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("Letra b: %.1f \n", temp); //Resposta esperada: 29.0
  
  
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("Letra c: %c \n", aux); //Resposta esperada: P
  
  
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("Letra d: %c \n", aux); //Resposta esperada: e
  
  
  /* (e) */
  p3 = nome;
  printf("Letra e: %c \n", *p3); //Resposta esperada: p
  
  
  /* (f) */
  p3 = p3 + 4;
  printf("Letra f: %c \n", *p3); //Resposta esperada: e
  
  
  /* (g) */
  p3--;
  printf("Letra g: %c \n", *p3); //Resposta esperada: t
  
  
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("Letra h: %d \n", idade); //Resposta esperada: 31
  

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("Letra i: %d \n", idade); //Resposta esperada: 45
  
  
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("Letra j: %d \n", idade); //Resposta esperada: 27
  
  
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("Letra l: %d \n", idade); //Resposta esperada: 31
  
  
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("Letra m: %d \n", *p5); //Resposta esperada: 45
  
  
  /* (n) */
  p5;
  printf("Letra n: %d \n", *p5); //Resposta esperada: 45
  
  return(0);
}
