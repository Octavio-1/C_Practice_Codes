#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, j = 2, k = 3, m = 2;
    printf( "%d", i == 1 );
    printf( "\n%d", j == 2 );
    printf( "\n%d", i >= 1 && j < 4 );
    printf( "\n%d", j >= i || k == m );
    printf( "\n%d", k + m < j || 3 - j >= k );
    printf( "\n%d", !m );
    printf( "\n%d", !( j - m ) );
    printf( "\n%d", !( k > m ) );
    printf( "\n%d", !( j > k ) );

    return 0;
}
