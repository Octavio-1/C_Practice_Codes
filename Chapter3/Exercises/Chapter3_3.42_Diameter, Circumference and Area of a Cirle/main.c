#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.14159;
    float circumference,radius,area,diameter;
    printf("Enter the value of the radius\n");
    scanf("%f",&radius);
    diameter = 2*radius;
    circumference = pi*radius;
    area = pi*radius*radius;
    printf("the diameter is: %f\n",diameter);
    printf("the circumference is: %f\n",circumference);
    printf("the diameter is: %f\n",area);

    return 0;
}
