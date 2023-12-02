/* Copying a string using array notation and pointer notation. */
#include <stdio.h>

void copy1( char * const s1, const char * const s2 ); /* prototype */
void copy2( char *s1, const char *s2 ); /* prototype */

int main( void )
{
    char string1[ 10 ];
    char *string2 = "Hello";
    char string3[ 10 ];
    char string4[] = "Good Bye";
    copy1( string1, string2 );
    printf( "string1 = %s\n", string1 );
    copy2( string3, string4 );
    printf( "string3 = %s\n", string3 );
    return 0;
}

/* copy s2 to s1 using array notation */
void copy1( char * const s1, const char * const s2 )
{
    int i;
    for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; i++ ) {
        ; /* do nothing in body */
    }
}

/* copy s2 to s1 using pointer notation */
void copy2( char *s1, const char *s2 )
{
    for ( ; ( *s1 = *s2 ) != '\0'; s1++, s2++ ) {
        ; /* do nothing in body */
    }
}
