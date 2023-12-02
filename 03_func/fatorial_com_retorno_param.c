#include <stdio.h>

int fatorial(int n);

int main(){
	int n, resultado;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	resultado = fatorial(n);
	
	printf("Resultado = %d", resultado);
	return 0;
}

int fatorial(int n){
	int i, fat = 1;
	for(i=1; i<=n; i++){
		fat *= i;
	}
	
	return fat;
}
