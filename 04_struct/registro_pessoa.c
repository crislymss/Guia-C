#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct pessoa p[2];
    strcpy(p[0].nome,"Regis");
    p[0].idade = 18;
    strcpy(p[1].nome,"Maria");
    p[1].idade = 25;

    printf("Nome: %s - Idade: %d\n", p[0].nome, p[0].idade);
    printf("Nome: %s - Idade: %d\n", p[1].nome, p[1].idade); 
}

