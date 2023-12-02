#include <stdio.h>

struct clientData {
    int acctNum;            /* account number */
    char lastName[ 15 ];    /* account last name */
    char firstName[ 10 ];   /* account first name */
    double balance;         /* account balance */
};

int main(void){
    FILE *cfPtr;
    struct clientData client = { 0, "", "", 0.0 };
    int acctNum;
    if ( ( cfPtr = fopen( "clients.dat", "rb" ) ) == NULL ) {
        printf( "File could not be opened.\n" );
    }
    else {
        printf( "Enter account number"
                " ( 1 to 100, 0 to end input )\n? " );
        scanf( "%d", &client.acctNum );
        while ( client.acctNum != 0 ) {
            fseek( cfPtr, ( client.acctNum - 1 ) * sizeof( struct clientData ), SEEK_SET );
            fread( &client, sizeof( struct clientData ), 1, cfPtr );
            printf( "Lastname, firstname, balance\n? " );
            printf( "%-16s%-11s%10.2f\n",
                client.lastName, client.firstName, client.balance );            
            printf( "Enter account number\n? " );
            scanf( "%d", &client.acctNum );
        }
        fclose( cfPtr );
    }
    return 0;
}
