#include <stdio.h>
#include <stdlib.h>
//have a mental image of the output before running the program.does it match?
//if yes then congratulations, you have made it in life!
//if no,just eat more vegetables and dont think about it too much.
int main()
{
    int i,j,k;
    for ( i = 1; i <= 5; i++ ) {
            for ( j = 1; j <= 3; j++ ) {
                for ( k = 1; k <= 4; k++ )
                  printf( "*" );
                 printf( "\n" );
            }
            printf( "\n" );

    }

    return 0;
}
