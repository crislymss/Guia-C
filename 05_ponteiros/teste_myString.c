#include "myString.h"

void main(){
	char s1[] = "Ola";
	char s2[] = "Tudo bem!";
	mystrcpy(s1,s2);
	mystrncpy(s1,s2);
}

// gcc teste_myString.c myString.c -o myString_exec
