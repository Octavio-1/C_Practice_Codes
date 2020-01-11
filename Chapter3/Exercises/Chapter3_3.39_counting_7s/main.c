#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
 * C program to convert the given binary number into decimal
 */


    int  num, binary_val, decimal_val = 0, sevens = 0, rem;

    printf("Enter an integer \n");
    scanf("%d", &num);
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        //decimal_val = decimal_val + rem * base;

        if(rem == 7){
            ++sevens;
        }

        num = num / 10 ;
        //base = base * 2;
    }
    printf("The  number of sevens is = %d \n", sevens);
   // printf("Its decimal equivalent is = %d \n", decimal_val);
    return 0;
}
