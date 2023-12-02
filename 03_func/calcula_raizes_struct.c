#include <stdio.h>

struct Raizes calculaRaizes(float a, float b, float c);

struct Raizes{
	float x1;
	float x2;
	int real;
};

int main(){
	float a,b,c;
	struct Raizes resultado;
	
	scanf("%f %f %f", &a, &b, &c);
	
	resultado = calculaRaizes(a, b, c);
	
	if( resultado.real ){
		printf("x1: %f\n", resultado.x1);
		printf("x2: %f\n", resultado.x2);
	}else{
		printf("Raizes nao sao numeros reais\n");
	}
		
	return 0;
}

struct Raizes calculaRaizes(float a, float b, float c){
	struct Raizes res_retorno;
	// delta = ...
	// finalizar
	return res_retorno;
}

