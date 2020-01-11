//The program uses a recursive function to multiply the two numbers entered(This version works with no restriction)
#include <stdio.h>
#include <stdlib.h>
int mystery( int a, int b );

int main()
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
    if(a == 0 || b == 0){

        return 0;
    }

    if ( b == 1 || b < 0 ) {

            if(b == 1)
                return a;

            if(b < 0 )
                return -(a + mystery( a,  fabs(b) - 1 ));
    }
 /* end if */
else { /* recursive step */
    return a + mystery( a,  fabs(b) - 1 );

    }
 /* end else */
} /* end function mystery */

