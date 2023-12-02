#include <stdio.h>
#define M 3

int main(){
    int i, j;
    int numeros[M][M] = {{1,2,3},{4,5,6},{7,8,9}};
    //imprimir matriz triangular superior
    for(i=0; i < M; i++){
        for(j=i; j < M; j++)
            printf("%i ", numeros[i][j]);
        printf("\n");
    }
    printf("\n");
}