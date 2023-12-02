#include <stdio.h>
#include <stdlib.h>

int concatArtig( int, int);
int concatSubst( int, int);
int sortear();
void criaFrase();

char frase[100];

void main(){
    int i=0;
    for(i=0; i<20; i++){
        criaFrase();
        printf("Frase: %s\n", frase);
    }
}

void criaFrase(){
    int s, pos = 0;
    
    s = sortear();
    pos = concatArtig(s, pos);    
    
    s = sortear();
    pos = concatSubst(s, pos);
    
    // ... outras concatenacoes aqui
    
    frase[0] -= 32;
    frase[pos-1] = '.';
    frase[pos] = '\0';
}    

int concatArtig( int s, int pos) {
    char artigo[][20] = {"o", "um", "algum", "todo", "qualquer"};
    int i = 0;
    printf("concatena: %i | %s | %s\n", pos, frase, artigo[s]);
    while( artigo[s][i] != '\0' ){
        frase[pos] = artigo[s][i];
        i++;
        pos++;
    }
    frase[pos] = ' ';
    pos++;    
    return pos;
}

int concatSubst( int s, int pos) {
    char substantivo[][20] = { "menino", "homem", "cachorro", "carro", "gato"};    
    int i = 0;
    printf("concatena: %i | %s | %s\n", pos, frase, substantivo[s]);
    while( substantivo[s][i] != '\0' ){
        frase[pos] = substantivo[s][i];
        i++;
        pos++;
    }
    frase[pos] = ' ';
    pos++;    
    return pos;
}

//char verbo[][20] = { "passou", "pulou", "correu", "saltos", "andou"};

//char preposicao[][20] = { "sobre", "sob", "ante", "ate", "com"};

int sortear(){
    int s = rand()%5;
    printf("s: %i\n", s);    
    return s;
}
