#include <stdio.h>

int main () {
	int i;
	printf("Digite um numero:");
	scanf("%d", &i);
	
	if (i % 3 == 0){
		printf("\nNumero divisivel por 3.");
	}
	
	if (i % 7 == 0){
		printf("\nNumero divisivel por 7.");
	}
	
	if (i % 11 == 0){
		printf("\nNumero divisivel por 11.");
	}
	
	if (i%3!=0 && i%7!=0 && i%11!=0) {
		printf ("\nNumero nao divisivel por 3, 7 e 11");
	}
	
    printf("\n");
}
