#include <stdio.h>

void main(){
    char texto[1000];
    char c;
    int i;
    puts("Entre com um texto:");
    i = 0;
    c = getchar();
    while( c != 'f' ){
        texto[i++] = c;
        c = getchar();        
    }
    texto[i] = '\0';
    puts("O texto digitado foi:");
    puts(texto);
}
        
