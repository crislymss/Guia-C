#include <stdio.h>
#define L 3
#define C 6

int main(){
    int i, j;
    char nomes[L][C] = {"Joao","Maria","Lucas"};
    int numeros[2][3] = {{1,2,3},{4,5,6}};
    //imprimir matriz
    for(i=0; i < L; i++)
        printf("%s ", nomes[i]);
    printf("\n");
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++)
            printf("%i ", numeros[i][j]);
        printf("\n");
    }
    printf("\n");
}