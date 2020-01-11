#include <stdio.h>
#include <stdlib.h>

int main()
{

     int number = 0;
     int i, k;
     int count = 1;

while(number != -1){

    printf("Enter the number of rows you want to print(enter -1 to exit)\n");
    scanf("%d",&number);
    number = number/2 + 1;
    count = number - 1;

//first half of the diamond
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++){

            printf(" ");
        }

        count--;

        for (i = 1; i <= 2 * k - 1; i++){

            printf("*");
        }
        printf("\n");
     }

     count = 1;

//bottom half of the diamond
     for (k = 1; k <= number - 1; k++){

         for (i = 1; i <= count; i++){

             printf(" ");
         }

         count++;

         for (i = 1 ; i <= 2 * (number - k) - 1; i++){

             printf("*");
         }
         printf("\n");
      }
}
    return 0;
}
