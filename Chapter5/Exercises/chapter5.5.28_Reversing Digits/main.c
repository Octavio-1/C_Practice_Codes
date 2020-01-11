#include <stdio.h>
#include <stdlib.h>

int reverse(int x);
int main()
{
    int number;

    while(number != -1){

    printf("Enter the integer to be reversed(enter -1 to end):");
    scanf( "%d",&number); //retrieve integer from user


    printf("The reversed number is:%d\n",reverse(number));

}
    return 0;
}
int reverse(int x){

    int num = 0;

    while(x != 0){



    num *= 10;
    num += x%10;
    x /= 10;
    }

    return num;

}
