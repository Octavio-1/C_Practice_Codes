#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int counter = 0;

    while(counter <= 30){

        if( counter % 2 == 0){

            sum += counter;
        }
        counter += 2;
    }

    printf("THE SUM IS : %d",sum);
    return 0;
}
