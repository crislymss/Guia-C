#include <stdio.h>

int n;
int fatorial();

int main(){
	int resultado;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	resultado = fatorial();
	
	printf("Resultado = %d", resultado);
	return 0;
}

int fatorial(){
	int i, fat = 1;
	for(i=1; i<=n; i++){
		fat *= i;
	}
	
	return fat;
}
