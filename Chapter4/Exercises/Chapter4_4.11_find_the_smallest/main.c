#include <stdio.h>
#include <stdlib.h>

int main()
{
   int counter = 1;
   int new_number;
   int number;
   int smallest = 0;
   printf("Enter number\n");
   scanf("%d",&number); //This determines the number of terms to be summed
    while(counter <= number){

        printf("Enter number %d\n",counter);
        scanf("%d",&new_number);

         if (counter == 1){

                smallest = new_number;
            }

         else

         if (new_number < smallest){
            smallest = new_number;
         }

        counter++;
    }
    printf("THE SMALLET NUMBER IS: %d",smallest);

    return 0;
}
