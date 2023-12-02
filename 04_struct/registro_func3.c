#include <stdio.h>
#include <string.h>

struct funcionario{
     char nome[80];
     char cargo[10];
     float salario;
};

typedef struct funcionario Funcionario;

void leFunc(int i);
void mostraFunc(int i);

Funcionario func[2];

int main(){     
     leFunc(func,0);
     mostraFunc(func,0);
     return 0;
}

void leFunc(int i){
     printf("Nome:");
     scanf("%s", a[i].nome);
     printf("Cargo:");
     scanf("%s", a[i].cargo);
     printf("Salario:");
     scanf("%f", &a[i].salario);    
}

void mostraFunc(int i){
     printf("Funcionario: %d\n", i);
     printf("Nome: %s\n", a[i].nome);
     printf("Cargo: %s\n", a[i].cargo);
     printf("Salario: %.2f\n", a[i].salario);   
}
