#include <stdio.h>
#include <stdlib.h>

int main()
{
   int counter = 0;
   int new_number;
   int number;
   int sum = 0;
   printf("Enter number\n");
   scanf("%d",&number); //This determines the number of terms to be summed
    while(number != 9999){

        printf("Enter number \n");
        scanf("%d",&number);
        if(number == 9999){
            break;
        }
        ++counter;
        sum += number;

    }
    printf("THE Average IS: %d",sum/counter);
    return 0;

}
