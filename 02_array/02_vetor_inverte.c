#include <stdio.h>
#define MAX 5

int main(){
    int n=MAX;
    int x, i, v[MAX];
    
    printf("Digite uma sequencia com %d numeros inteiros: ", n);
    for( i = 0; i < n; i++ )
        scanf("%d", &v[i]);
    
    for( i = 0; i < n; i++ )
        printf("%d", v[i]);
    
    printf("\n");
    
    for( i = n-1; i >= 0; i-- )
        printf("%d", v[i]);
    printf("\n");
    
    return 0;
}
