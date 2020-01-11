#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,a,b,g;

//a) !( x < 5 ) && !( y >= 7 )
//de morgans equivalent is: !(x < 5 || y >= 7)
//proof
if((!( x < 5 ) && !( y >= 7 )) == !(x < 5 || y >= 7) ){

    printf("a is true\n");
}

else

    printf("a is false\n");

//b) !( a == b ) || !( g != 5 )
//de morgans equivalent is: !((a == b) && (g != 5))
//proof

 if((!( a == b ) || !( g != 5 )) == !((a == b) && (g != 5)) ){

    printf("b is true\n");
}
else

    printf("b is false\n");

//c)!( ( x <= 8 ) && ( y > 4 ) )

if(!(( x <= 8 ) && ( y > 4 ) ) == (!(x <= 8) || !(y > 4))){

    printf("c is true\n");
}

else
    printf("c is false\n");

//d) !( ( i > 4 ) || ( j <= 6 ) )
//de morgans equivalent is: !( i > 4 ) && !( j <= 6 )
//proof

if( !( ( i > 4 ) || ( j <= 6 ) ) == !( i > 4 ) && !( j <= 6)){

    printf("d is true\n");
}
else

    printf("d is false\n");
    return 0;
}
