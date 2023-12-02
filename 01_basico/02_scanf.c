#include <stdio.h>

int main(){
   int n1;
   float n2;

   printf("Informe um numero inteiro: ");
   scanf("%i", &n1);
   printf("Informe um numero real: ");
   scanf("%f", &n2);

   printf("Numero inteiro: %i\n", n1);
   printf("Numero real: %3.2f\n", n2);
   
   return 0;
}