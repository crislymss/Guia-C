#include <stdio.h>






void printCharacters1( char *sPtr );
void printCharacters2( const char *sPtr );
void printCharacters3( char * const sPtr );
void printCharacters4( const char * const sPtr );








int main( void )
{
    char string1[] = "Hello!!!";
    printf( "A string eh:\n" );
    printCharacters1( string1 );
    printCharacters2( string1 );
    printCharacters3( string1 );
    printCharacters4( string1 );
    printf( "\n" );
    return 0;
}





/* pode modificar o apontador e a string que ele aponta */
void printCharacters1( char *sPtr ){
    char string2[] = "Ahhh!";
    sPtr[0] = 'h';
    sPtr = string2; 
    sPtr[0] = 'a';
    for ( ; *sPtr != '\0'; sPtr++ ) {
        printf( "%c", *sPtr );
    }
    printf("\n");
}







/* nao pode modificar a string que sPtr aponta
   mas sPtr pode apontar para outros enderecos */
void printCharacters2( const char *sPtr ){
    char string2[] = "Ahhh!";    
    sPtr = string2;
//    sPtr[0] = 'h';            //ERROR    
    for ( ; *sPtr != '\0'; sPtr++ ) {
        printf( "%c", *sPtr );
    }
    printf("\n");
}





/* sPtr pode modificar a string que ele aponta
   mas não pode apontar para outros enderecos */
void printCharacters3( char * const sPtr ){
    int i;
    sPtr[0] = 'h';                      // OKAY
    char string2[] = "Ahhh!";           // OKAY
    //sPtr = string2;                   // ERROR
    
    //for ( ; *sPtr != '\0'; sPtr++ ) { // ERROR
    //    printf( "%c", *sPtr );
    //}
    
    for ( i = 0; sPtr[ i ] != '\0'; i++ ) {
        printf( "%c", sPtr[ i ] );
    }
    printf("\n");
}


/* sPtr não pode modificar a string que ele aponta
   e não pode apontar para outros enderecos */
void printCharacters4( const char * const sPtr ){
    int i;
    char string2[] = "Ahhh!";
    //sPtr[0] = 'h';                    // ERROR
    //sPtr = string2;                   // ERROR
    //for ( ; *sPtr != '\0'; sPtr++ ) { // ERROR
    //    printf( "%c", *sPtr );
    //}
    for ( i = 0; sPtr[ i ] != '\0'; i++ ) {
//        printf( "%c", sPtr[ i ] );
        printf( "%c", *(sPtr + i) );
    }
    printf("\n");
}

