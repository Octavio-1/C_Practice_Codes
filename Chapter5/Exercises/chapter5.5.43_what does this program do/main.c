//The program uses a recursive function to multiply the two numbers entered but the second number must be non-negative
#include <stdio.h>
#include <stdlib.h>
int mystery( int a, int b );
/* function main begins program execution */
int main( void )
{
int x; /* first integer */
int y; /* second integer */
printf( "Enter two integers: " );
scanf( "%d%d", &x, &y );
printf( "The result is %d\n", mystery( x, y ) );
return 0; /* indicates successful termination */
} /* end main */
/* Parameter b must be a positive integer
to prevent infinite recursion */
int mystery( int a, int b )
{
/* base case */
if ( b == 1 ) {
return a;
} /* end if */
else { /* recursive step */
return a + mystery( a, b - 1 );
} /* end else */
} /* end function mystery */
