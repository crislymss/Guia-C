#include <stdio.h>

typedef struct{
	float ira;
	float altura;
	float peso;
}Aluno;

void lerClasse( Aluno c[], int n );
float calcula_media( Aluno c[], int n );

void main(){
	Aluno classe[30];
	lerClasse(classe, 3);
	printf("Media %f", calcula_media(classe, 3) );
}

void lerClasse( Aluno c[], int n ){
	int i;
	for( i=0; i<n; i++ ){
		scanf("%f", &c[i].altura);
	}
}

float calcula_media( Aluno c[], int n ){
	int i;
	float soma = 0;
	for( i=0; i<n; i++ ){
		soma += c[i].altura;
	}
	return soma/n;
}

