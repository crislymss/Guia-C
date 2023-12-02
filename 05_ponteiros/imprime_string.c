#include <stdio.h>

void imprime_string( const char * );

void main(){
	char s[50];
	printf("Informe uma palavra: ");
	scanf("%s", s);
	imprime_string(s);
}


void imprime_string( const char *s ){
	int i=0;
	while( s[i] != '\0' ){
		printf( "%c\n", s[i] );
//		s[i] = 'x';
		i++;
	}
}

