

    #include <stdio.h>

    int main(){
        int i, n[ 10 ];

        for ( i = 0; i < 10; i++ ) {
            n[ i ] = 0;
        }
        printf( "%s%13s\n", "Elemento", "Valor" );

        for ( i = 0; i < 10; i++ ) {
            printf( "%8d%13d\n", i, n[ i ] );
        }
        
        return 0;
    }
