#include <stdio.h>

int main (){
	const float PI=3.141;
	// PI = PI + 1;  essa linha gera erro de compilação pois PI eh constante
	printf("PI = %.3f\n", PI);
}
