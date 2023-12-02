#include <stdio.h>
#include <string.h>

typedef struct{
     char nome[80];
     char cargo[10];
     float salario;
} Funcionario;

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
     scanf("%s", func[i].nome);
     printf("Cargo:");
     scanf("%s", func[i].cargo);
     printf("Salario:");
     scanf("%f", &func[i].salario);    
}

void mostraFunc(int i){
     printf("Funcionario: %d\n", i);
     printf("Nome: %s\n", func[i].nome);
     printf("Cargo: %s\n", func[i].cargo);
     printf("Salario: %.2f\n", func[i].salario);   
}
