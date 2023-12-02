/* Using subscripting and pointer notations with arrays */
#include <stdio.h>

int main(){
    int v[] = { 1, 2, 3, 4, 5 };
    int *vPtr;
    int i;
    
    vPtr = v;     // vPtr = &v[0];
    
    printf( "Vetor com subscrito\n" );
    for ( i = 0; i < 5; i++ ) {
        printf( "v[ %d ] = %d\n", i, v[ i ] );
    }
    
    printf( "Vetor sem subscrito usando o 1o. elemento\n" );    
    for ( i = 0; i < 5; i++ ) {
        printf( "*( v + %d ) = %d\n", i, *( v + i ) );
    }
    
    printf( "Ponteiro com subscrito\n" );
    for ( i = 0; i < 5; i++ ) {
        printf( "vPtr[ %d ] = %d\n", i, vPtr[ i ]);
    }

    printf( "Ponteiro sem subscrito\n" );
    for ( i = 0; i < 5; i++ ) {
        printf( "*( vPtr + %d ) = %d\n", i, *( vPtr + i ));
    }
    
    return 0;
}
