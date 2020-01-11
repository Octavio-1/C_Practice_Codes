#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*The programmer was trying to preincrement an expression which is wrong
    the right thing to do is to reduce/evaluate the expression to a variable before preincrementing*/
    int y,x;
    y = x = 0;
    int z = x + y;

   printf( "%d", ++z );
    return 0;
}
