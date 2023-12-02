#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fPtr;
    int retorno;
    fPtr = fopen("teste.txt","w");
    
    if( fPtr == NULL ){
        printf("Erro na abertura de arquivo!\n");
        exit(1);        
    }else{
        printf("Arquivo aberto com sucesso!\n");
    }
    
    retorno = fprintf(fPtr, "%s %d\n", "Aula de Algoritmos e Programacao", 1);
    printf("%d caracteres escritos\n", retorno);
    
    retorno = fputs("Turma:", fPtr);
    printf("Retorno da escrita: %d\n", retorno);
    
    retorno = fputc('1', fPtr);
    printf("Caractere escrito: %d\n", retorno);
    
    retorno = fputc('\n', fPtr);
    printf("Caractere escrito: %d\n", retorno);    
    
    fclose(fPtr);
}
