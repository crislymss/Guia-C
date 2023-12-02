#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv){
	int i=0;
	printf("Quantidade de parametros: %d\n", argc);
	while(i < argc){
		printf("Parametro %d %s\n", i+1, argv[i]);
		i++;
	}
	
	FILE *arq;
	arq = fopen(argv[1],"r");
	if( arq == NULL){
		printf("Erro na abertura do arquivo\n");
		exit(1);
	}else{
		printf("Deu certo!\nVamos agora processar o arquivo!");
	}
}
