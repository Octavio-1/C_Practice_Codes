#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diameter, area, circumference, radius;
    float pi = 3.142;

    //retrieve value of radius from user
    printf("please enter the radius\n");
    scanf("%d",&radius);

    //printing results
    printf("The diameter is %f\n",2*pi);
    printf("The area is %f\n",2*pi*radius*radius);
    printf("The circumference is %f\n",2*pi*radius);

    return 0;
}
