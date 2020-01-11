#include <stdio.h>
#include <stdlib.h>

float minimum(float a,float b,float c);
int main()
{
    float a;
    float b;
    float c;

    printf("Enter three floating point numbers: ");
    scanf("%f%f%f",&a,&b,&c);

    printf("The smallest floating point number is: %f",minimum(a, b, c));

    return 0;
}


float minimum(float a,float b,float c){

        float smallest = 0.0;

        if( a < b && a < c)

          smallest = a;

       if(b < a && b < c)

          smallest = b;

       if(c < b && c < a)

        smallest = c;

        return smallest;

    }
