#include <stdio.h>
#include <string.h>

#define N 3

typedef struct{
     char nome[80];
     char cargo[10];
     float salario;
} Funcionario;

void leFunc(Funcionario [], int);
void mostraFunc(Funcionario [], int);

int main(){
	 Funcionario func[N];
	 int i;
	 //leitura
	 for(i=0; i<N; i++){
     	leFunc(func,i);
	 }
	 
	 //escrita
	 for(i=0; i<N; i++){
   	    mostraFunc(func,i);

	 }
	 
	 return 0;
}

void leFunc(Funcionario f[], int i){
     printf("Nome: ");
     scanf("%s", f[i].nome);
     printf("Cargo: ");
     scanf("%s", f[i].cargo);
     printf("Salario: ");
     scanf("%f", &f[i].salario);    
}

void mostraFunc(Funcionario f[], int i){
     printf("Funcionario: %d\n", i);
     printf("Nome: %s\n", f[i].nome);
     printf("Cargo: %s\n", f[i].cargo);
     printf("Salario: %.2f\n", f[i].salario);
     printf("\n");
}
