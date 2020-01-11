#include <stdio.h>
#include <stdlib.h>

int main()
{
   int counter = 1;
   int new_number;
   int number;
   int sum = 0;
   printf("Enter number\n");
   scanf("%d",&number); //This determines the number of terms to be summed
    while(counter <= number){

        printf("Enter number %d\n",counter);
        scanf("%d",&new_number);
        sum += new_number;
        counter++;
    }
    printf("THE TOTAL SUM IS: %d",sum);
    return 0;
}
