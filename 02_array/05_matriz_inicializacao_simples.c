

        #include <stdio.h>
        #define M 3
        #define N 4

        int main( ){
            int i, j, n[ M ][ N ];
            for ( i = 0; i < M; i++ ) {
                for ( j = 0; j < N; j++ ) {
                    n[ i ][ j ] = 0;
                }
            }
            printf("Elemento Valor\n");
            for ( i = 0; i < M; i++ ) {
                for ( j = 0; j < N; j++ ) {
                    printf("%i %i %i\n",i, j, n[i][j] );
                }
            }
            return 0;
        }
