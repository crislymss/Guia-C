#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int NUM_COMP, NUM_MOV;


typedef struct{
    int chave;
    char nome[50];
    char end[50];
}Aluno;


void insertionSort(Aluno v[], int n){
    int i, j;
    Aluno atual;
    for (i = 1; i < n; i++){
        atual = v[i];
        j = i - 1;
        while( (j >= 0) && (atual.chave < v[j].chave) ) {
            NUM_COMP += 1;            
            NUM_MOV += 1;
            v[j + 1] = v[j];
            j--;
        }
        NUM_COMP += 1;        
        v[j+1] = atual;
        NUM_MOV += 2;
    }
}


// void troca(Aluno a, Aluno b){
void troca(Aluno v[], int i, int min){
    Aluno aux;
    aux = v[i];
    v[i] = v[min];
    v[min] = aux;
    NUM_MOV += 3;
}
    

void selecao(Aluno v[], int n){
    int i, j, min;
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1 ; j < n; j++) {
            NUM_COMP += 1;
            if(v[j].chave < v[min].chave){
                min = j;
            }
        }
        troca(v, i, min);
    }
}


void gerarDados(Aluno v[], int n, int tipoOrd){
    int i;
    if( tipoOrd == 0 ){
        for(i=0; i<n; i++){
            v[i].chave = i;
        }
    }else if( tipoOrd == 1 ){
        for(i=0; i<n; i++){
            v[i].chave = rand()%100;
        }
    }else{
        int j = n;
        for(i=0; i<n; i++){
            j--;
            v[i].chave = j;
        }
    }
}


void verDados(Aluno v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", v[i].chave);
    }
    printf("\n");
}


void main(int argc, char **argv){
    Aluno v[1000], aux[1000];
    int n, tipoDados;
    
    srand(time(0));
    
    if( argc == 3 ){
        n = atoi(argv[1]);
        tipoDados = atoi(argv[2]);
    }else{
        printf("Tam vetor: ");
        scanf("%d", &n);
        printf("Tipo dados: ");
        scanf("%d", &tipoDados);
    }
    
    gerarDados(v, n, tipoDados);
    verDados(v, n);
    
    printf("\n");    

	memcpy(aux, v, n*sizeof(Aluno));
	verDados(aux,n);
    NUM_COMP = NUM_MOV = 0;
    insertionSort(aux, n);
    printf("insercao %d %d %d\n", n, NUM_COMP, NUM_MOV);
    
    printf("\n");
    
    memcpy(aux, v, n*sizeof(Aluno));
    verDados(aux,n);
    NUM_COMP = NUM_MOV = 0;
    selecao(aux, n);    
    printf("selecao %d %d %d\n", n, NUM_COMP, NUM_MOV);
}
    
