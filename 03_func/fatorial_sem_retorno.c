#include <stdio.h>

int n;
void fatorial();

int main(){
	int resultado;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	fatorial();
	
	return 0;
}

void fatorial(){
	int i, fat = 1;
	for(i=1; i<=n; i++){
		fat *= i;
	}
	printf("Resultado = %d", fat);
}
