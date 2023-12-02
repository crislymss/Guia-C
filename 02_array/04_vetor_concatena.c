#include <stdio.h>

void main(){
	char vet1[10] = "abcd";
	char vet2[10] = "efgh";
	char vet3[10];
	int i,p;
	
	i=0;
	p=0;
	while( vet1[i] != '\0' ){
	    vet3[p] = vet1[i];
	    i++;
	    p++;
	} // vet3: "abcd"
	
	i=0;
	while( vet2[i] != '\0' ){
	    vet3[p] = vet2[i];
	    i++;
	    p++;	    
	}
	
	vet3[p] = '\0';
	printf("%s\n", vet3);
	
}
