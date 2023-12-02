#include <stdio.h>

int main () {
	int num;
    char c;
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	switch (num) {
        	case 9: printf ("\n\nO numero eh igual a 9.\n");
        	             break;
        	case 10: printf ("\n\nO numero eh igual a 10.\n");
        	               break;
        	case 11: printf ("\n\nO numero eh igual a 11.\n");
        	              break;
        	default: printf ("\n\nO numero nao eh nem 9 nem 10 nem 11.\n");
    }
    printf ("\nPressione uma letra e enter");
    scanf(" %c", &c);
}

