#include <stdio.h>
#include <stdlib.h>
int gcd(int arg,int arg1);

int main()
{
    int num1,num2;
    printf("Enter the two integers to be compared:");
    scanf("%d%d",&num1,&num2);

    printf("The gcd for the integers is: %d",gcd(num1,num2));
    return 0;
}
int gcd(int arg,int arg1){

    int counter, gcd, smallest;

    if(arg < arg1)

        smallest = arg;

    else

        smallest = arg1;

    for(counter = 1; counter <= smallest; counter++){

        if(arg%counter == 0 && arg1%counter == 0){

            gcd = counter;

        }
    }

    return gcd;
}
