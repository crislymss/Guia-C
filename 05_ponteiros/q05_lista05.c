//Discussão sobre ponteiros e vetores em C
//1o. um ponteiro pode ser declarado como um vetor e vice versa (l.15-19)
//2o. podemos declarar um vetor de ponteiros como um vetor de string/matriz de char (l.22-24)
//3o. podemos declarar a estrutura carta com campos que são ponteiros para facilitar atribuição

#include <stdio.h>

typedef struct{
	char *face;
	char *naipe;
}Carta;

void preenche( Carta *deck, char *face[ ], char *naipe[ ] );

void main(){

	//1o. declaração de ponteiros como string/vetor de char
	char *naipePref = "Ouro";	//	char naipePref[] = "Ouro";
	char *facePref = "Rei";		//	char facePref[] = "Rei";	
	printf("Minha carta preferida: %s de %s\n", facePref, naipePref);
	
	//2o. declaração de vetor de ponteiros como vetor de strings
	char *naipe[] = {"Paus", "Espada", "Ouro", "Copas"};
	char *face[] = {"As", "Dois", "Tres", "Quatro","Cinco"};
	printf("Minha carta escolhida: %s de %s\n", face[0], naipe[1]);
	
	//3o. struct com campos que são ponteiros
	Carta deck[52];
	deck[0].face = face[0];
	deck[0].naipe = naipe[0];	
	printf("Primeira carta do deck: %s de %s\n", deck[0].face, deck[0].naipe);
	
	//Funcao com passagem de vetores como ponteiros
	preenche(deck, face, naipe);
	printf("Segunda carta do deck: %s de %s\n", deck[1].face, deck[1].naipe);
}

void preenche( Carta *deck, char *face[ ], char *naipe[ ] ){
	deck[1].face = face[1];
	deck[1].naipe = naipe[0];
}
