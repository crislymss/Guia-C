#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fPtr;
    int retornoInt;
    char c, palavras[100], *retornoChar;
    int numeros;
    
    fPtr = fopen("teste.txt","r");
    if( fPtr == NULL ){
        printf("Erro na abertura de arquivo!\n");
        exit(1);        
    }else{
        printf("Arquivo aberto com sucesso!\n");
    }

    retornoInt = fscanf(fPtr, "%s", palavras);
    if( retornoInt > 0 ){
        printf("1a. palavra lida: %s\n", palavras);
    }

    retornoChar = fgets(palavras, 20, fPtr);
    if( retornoChar ){
        printf("Prox 20 caracteres lidos: %s\n", palavras);
    }

    printf("Segue leitura por caracter:\n");
    c = fgetc(fPtr);
    while( c != EOF ){
        printf("%c\n", c);        
        c = fgetc(fPtr);
    }
    fclose(fPtr);
}
        
