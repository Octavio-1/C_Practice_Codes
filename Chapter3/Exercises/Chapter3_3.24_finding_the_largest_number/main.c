#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter,largest,number;
    largest = 0;

    for(counter = 1;counter <= 10;counter++){

        printf("Enter the number %d: ",counter);
        scanf("%d",&number);

        if(number >= largest){
            largest = number;

        }

    }
    printf("The largest number entered is :%d\n ",largest);
    return 0;
}
