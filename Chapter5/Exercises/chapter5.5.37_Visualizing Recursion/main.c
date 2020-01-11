#include <stdio.h>
#include <stdlib.h>

long fibonacci( long n ); /* function prototype */
int main()
{
    long number; /* number input by user */
    long result; /* fibonacci value */

    printf( "Enter an integer: " );
    scanf( "%ld", &number );

    result = fibonacci( number );

    printf( "Fibonacci( %ld ) = %ld\n", number, result );
    return 0; /* indicates successful termination */
}

long fibonacci( long n )
{
    int temp;

    /* base case */
    if ( n == 0 || n == 1 ) {

    printf("parameter:%ld\n",n);
    printf("result:%ld\n",temp);
    return n;
    } /* end if */

    else { /* recursive step */

       printf("parameter:%ld\n",n);

       temp = fibonacci( n - 1 ) + fibonacci( n - 2);
       return temp;
    } /* end else */

} /* end function fibonacci */
