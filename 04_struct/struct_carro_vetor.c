#include <stdio.h>

struct carro{
	char nome[30];
	char montadora[30];
	int autonomia;
};

#define N 3

int main(){
	struct carro c[N], maior_auto;
	int i;
	maior_auto.autonomia = 0;
	for(i=0; i<N; i++){
		printf("Carro %d\n", i);
		printf("Informe nome montadora autonomia: ");
		scanf("%s %s %d", c[i].nome, c[i].montadora, &c[i].autonomia);
		if( c[i].autonomia > maior_auto.autonomia ){
			maior_auto = c[i];
		}
		setbuf(stdin, NULL);
	}
	printf("Carro mais economico: %s %d km/litros\n", maior_auto.nome, maior_auto.autonomia);
	return 0;
}
