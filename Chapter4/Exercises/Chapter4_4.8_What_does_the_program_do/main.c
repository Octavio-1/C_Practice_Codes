//An '@' printing program

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int i;
    int j;
    /* prompt user for input */
    printf( "Enter two integers in the range 1-20:");
    scanf( "%d%d", &x, &y ); //read values for x and y
    for ( i = 1; i <= y; i++ ) { //count from 1 to y
        for ( j = 1; j <= x; j++ ) { // count from 1 to x
            printf( "@" ); /* output @ */
} /* end inner for */
printf( "\n" ); /* begin new line */
} /* end outer for */

    return 0;
}
