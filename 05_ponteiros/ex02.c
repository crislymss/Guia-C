#include <stdio.h>

void main ()
{
    int num, num2, *ptr;

    num = 55;
    ptr = &num;

    printf("\nValor endereco: %p\n", &num);
    printf("\nValor endereco: %p\n", ptr);
    printf("\nValor armazenado: %d\n", num);
    printf("\nValor armazenado: %d\n", *ptr);    
    printf("\nComplementos: %p\n", &*ptr);
    printf("\ncomplementos: %p\n", *&ptr);
    
    printf("\nNumero 2:\n");
    
    num2 = 100;
    ptr = &num2;

    printf("\nValor endereco: %p\n", &num2);
    printf("\nValor endereco: %p\n", ptr);
    printf("\nValor armazenado: %d\n", num2);
    printf("\nValor armazenado: %d\n", *ptr);    
    printf("\nComplementos: %p\n", &*ptr);
    printf("\ncomplementos: %p\n", *&ptr);
    
}

