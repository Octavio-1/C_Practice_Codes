#include <stdio.h>
#include <stdlib.h>

int main()
{
     float y = 0;
     float  num1,num2,num3;
     printf("Enter the first number\n");
     scanf("%f",&num1);
     printf("%f\n",num1);
     y = floor( num1 + .5 );
     printf("rounded number:%f\n",y);

     printf("Enter the second number\n");
     scanf("%f",&num2);
     printf("%f\n",num2);
     y = floor(num2 + 0.5);
     printf("rounded number:%f\n",y);

     printf("Enter the third number\n");
     scanf("%f",&num3);
     printf("%f\n",num3);
     y = floor(num3 + 0.5);
     printf("rounded number:%f\n",y);

     return 0;
}
