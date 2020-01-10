#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int first_digit, second_digit, third_digit, fourth_digit, fifth_digit;
    printf("Please enter number:\n");
    scanf("%d",&number);

    //seperating the numbers

   first_digit = (number/10000) % 10;
   second_digit = (number/1000) % 10;
   third_digit = (number/100) % 10;
   fourth_digit = (number/10) % 10;
   fifth_digit = number % 10;

   //displaying seperated digits
   printf("The seperated digits are:\n");
   printf("%d   %d   %d   %d   %d",first_digit,second_digit,third_digit,fourth_digit,fifth_digit);

    return 0;
}
