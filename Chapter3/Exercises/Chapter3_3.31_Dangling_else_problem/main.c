#include <stdio.h>
#include <stdlib.h>

int main()
//test for y=11 and x=9
{   int x = 9;
    int y = 11;
    if ( x < 10 ) //is x < 9?(yes).run next single unbracketed statement
    if ( y > 10 ) //is y > 10?(yes).run next single unbracketed statement
    printf( "*****\n" );
    else
    printf( "#####\n" );
    printf( "$$$$$\n" );//execute line of code after if else construct
    return 0;
}
