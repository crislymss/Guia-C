#include <stdio.h>

struct carro{
	char nome[30];
	char montadora[30];
	int autonomia;
};

int main(){
	struct carro c1, c2;
	printf("Carro 1: ");
	scanf("%s %s %d", c1.nome, c1.montadora, &c1.autonomia);
	printf("Carro 2: ");
	scanf("%s %s %d", c2.nome, c2.montadora, &c2.autonomia);
	printf("Carro mais economico: ");
	if( c1.autonomia > c2.autonomia ){
		printf("%s\n", c1.nome);
	}else{
		printf("%s\n", c2.nome);
	}
	return 0;
}
