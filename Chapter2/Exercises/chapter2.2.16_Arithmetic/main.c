#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, quotient, remainder, product, sum, difference;
    //retrieve numbers from user
    printf("Enter the value of the 2 integers now: ");
    scanf("%d%d",&x,&y);

    //performing calculatioms
    sum = x + y;
    difference = x - y;
    remainder = x % y;
    product = x * y;
    quotient = x / y;

    //displaying results
    printf("sum = %d\n",sum);
    printf("difference = %d\n",difference);
    printf("product = %d\n",product);
    printf("quotient = %d\n",quotient);
    printf("remainder = %d",remainder);

    return 0;
}
