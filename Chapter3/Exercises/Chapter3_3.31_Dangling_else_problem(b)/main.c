#include <stdio.h>
#include <stdlib.h>

int main()
{
    //due to the presence of brackets the code will execute normally.
    int x = 11;
    int y = 9;
    if ( x < 10 ) {
    if ( y > 10 )
    printf( "*****\n" );
    }
    else {
    printf( "#####\n" );
    printf( "$$$$$\n" );
    }
    return 0;
}
