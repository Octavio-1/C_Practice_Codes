#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hold,counter,largest,number,second_largest;
    largest = 0;
    hold = 0;
    second_largest = 0;

    for(counter = 1;counter <= 10;counter++){

        printf("Enter the number %d: ",counter);
        scanf("%d",&number);

        if(number > largest){

            largest = number;

        }
        else
            {
                hold = number;
                if(hold > second_largest){

                second_largest = number;

                }
        }

    }
    printf("The largest number entered is :%d\n\nThe second largest number is :%d \n4",largest,second_largest);

    return 0;
}
