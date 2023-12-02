#include <stdio.h>

int main( void ){
    int account;        /* account number */
    char name[ 30 ];    /* account name */
    double balance;     /* account balance */
    
    FILE *cfPtr;
    
    if ( ( cfPtr = fopen( "clients.dat", "w" ) ) == NULL ) {
        printf( "File could not be opened\n" );
    }
    else {
        printf( "Enter the account, name, and balance.\n" );
        printf( "Enter EOF to end input.\n" );
        printf( "? " );
        scanf( "%d%s%lf", &account, name, &balance );
        while ( !feof( stdin ) ) {
            fprintf( cfPtr, "%d %s %.2f\n", account, name, balance );
            printf( "? " );
            scanf( "%d%s%lf", &account, name, &balance );
        }
        fclose( cfPtr );
        printf( "Press enter to close!\n" );
        getchar();
    }
    return 0;
}
