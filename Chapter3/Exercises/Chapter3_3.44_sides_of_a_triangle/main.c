#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a = 1.0;
    float b,c;
    float x,y,z;
   // float angleA,angleB,angleC;
    //float test = 180.0;

    while( a != -1.0)
    {
        printf("Enter the three numbers in float(enter -1.0 to end)\n");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);

       /*
        Triangle Theorem:
         This theorem simply states that the sum of two sides of a triangle must be greater than the third side.
         If this is true for all three combinations, then you will have a valid triangle.
         You'll have to go through these combinations one by one to make sure that the triangle is possible.
         You can also think of the triangle as having the side lengths a, b, and c and the theorem being an inequality,
         which states: a+b > c, a+c > b, and b+c > a
        */
        if(a + b  > c && a + c > b && b + c > a)
        {
            printf("The numbers represent three sides of a triangle \n\n");

        }
            else

                printf("The numbers DO NOT represent three sides of a triangle\n\n");
    }

    return 0;
}
