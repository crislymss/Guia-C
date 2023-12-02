#include <stdio.h>
#define L 3
#define C 20

int main(){
    int i;
    char nomes[L][C];
    for(i=0; i < L; i++){
        scanf("%s", nomes[i]);
    }
    printf("\n");    

    //imprimir matriz
    for(i=0; i < L; i++){
        printf("nome %i: %s\n", i, nomes[i]);
    }
    printf("\n");
}