#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fPtr;
    fPtr = fopen("teste.txt","w");
    if( fPtr == NULL ){
        printf("Erro na abertura de arquivo!\n");
        exit(1);
    }else{
        printf("Arquivo aberto com sucesso!\n");
    }
    fclose(fPtr);
    printf("Arquivo fechado com sucesso!\n");
}

