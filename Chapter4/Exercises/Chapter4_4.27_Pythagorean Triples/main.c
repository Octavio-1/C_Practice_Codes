#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c; //variables representing the triples

    for(a = 1; a <= 500; a++){

        for(b = 1; b <= 500; b++){

            for(c = 1; c <= 500; c++ ){

                if(a*a == c*c + b*b && b < c ){

                    printf("The pythagorean triple are: %d,%d,%d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
