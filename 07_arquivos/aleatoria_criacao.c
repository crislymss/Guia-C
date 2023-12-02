#include <stdio.h>

struct clientData {
    int acctNum;            /* account number */
    char lastName[15];      /* account last name */
    char firstName[10];     /* account first name */
    double balance;         /* account balance */
};

int main( void ){
    int i;
    struct clientData blankClient = { 0, "", "", 0.0 };
    FILE *fPtr;
    if ( ( fPtr = fopen( "clients.dat", "wb" ) ) == NULL ) {
        printf( "File could not be opened.\n" );
    }
    else {
        for ( i = 1; i <= 100; i++ ) {
            fwrite( &blankClient, sizeof( struct clientData ), 1, fPtr );
        }
        fclose ( fPtr );
        printf( "File created.\n" );
    }
    return 0;
}

