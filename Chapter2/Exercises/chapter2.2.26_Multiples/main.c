#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_number, second_number;
    printf("Please enter first number:\n");
    scanf("%d",&first_number);
    printf("Please enter second number:\n");
    scanf("%d",&second_number);

    //checking for multiples

    if(first_number % second_number == 0){

        printf("%d is a multiple of %d",first_number,second_number);
    }

    if(first_number % second_number != 0){

        printf("%d is not a multiple of %d",first_number,second_number);
    }
    return 0;
}
