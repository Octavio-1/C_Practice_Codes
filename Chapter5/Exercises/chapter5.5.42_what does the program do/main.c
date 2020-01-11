#include <stdio.h>
#include <stdlib.h>
/* function main begins program execution */
int main( void )
{
int c; /* variable to hold character input by user */
if ( ( c = getchar() ) != EOF ) {
main();
printf( "%c", c );
} /* end if */
return 0; /* indicates successful termination */
} /* end main */
