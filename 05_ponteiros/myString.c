#include "myString.h"
#include <stdio.h>

char *mystrcpy(char *s1, const char *s2){
	printf("Teste strcpy: %s %s", s1, s2);
}

char *mystrncpy(char *s1, const char *s2){
	printf("Teste strncpy: %s %s", s1, s2);
}
