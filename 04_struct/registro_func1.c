#include <stdio.h>

struct funcionario{
     char nome[80];
     char cargo[10];
     float salario;
};

int main(){
     struct funcionario func;
     printf("Nome:");
     scanf("%s", func.nome);
     printf("Cargo:");
     scanf("%s", func.cargo);
     printf("Salario:");
     scanf("%f", &func.salario);
     printf("Funcionario:\n");
     printf("Nome: %s\n", func.nome);
     printf("Cargo: %s\n", func.cargo);
     printf("Salario: %.2f\n", func.salario);   
     return 0;
}