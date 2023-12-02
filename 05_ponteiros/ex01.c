#include <stdio.h>

void main()
{
    int num, *ptr;

    num = 55;
    ptr = &num;

    printf("\nValor endereco: %p\n", &num);
    printf("\nValor endereco: %p\n", ptr);
    
    printf("\nValor armazenado: %d\n", num);
    printf("\nValor armazenado: %d\n", *ptr);        
    
    printf("\nComplementos: %p\n", &*ptr);   // &(*ptr) : &num : A1h
    printf("\ncomplementos: %p\n", *&ptr);   // *(&ptr) : *A2h : A1h
    
}

