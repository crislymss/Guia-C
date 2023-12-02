#include <stdio.h>

int inc1(int x){   // passagem de parametro por valor
    x++;
    return x;
}

void inc2(int *x){ // passagem de parametro por referencia
    (*x)++;
}

void main (){
    int n;
    n = 1;
    
    printf("%i\n",n);		// 1
    printf("%i\n",inc1(n)); // 2
    printf("%i\n",inc1(n)); // 2
    printf("Valor atual apos passagens por copia: %i\n",n);
    
    printf("\n");
    
    printf("%i\n",n);		// 1
    inc2(n);				
    printf("%i\n",n);		// 2
    inc2(&n);
    printf("%i\n",n);		// 3
    printf("Valor atual apos passagens por referencia: %i\n",n);
}

