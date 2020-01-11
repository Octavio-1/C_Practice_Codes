#include <stdio.h>
#include <stdlib.h>

int main()
{
    int product = 1;
    int counter = 1;

    while(counter <= 15){
        if( counter % 2 == 1){
            product *= counter;
        }
        counter++;
    }
    printf("THE PRODUCT IS : %d",product);

    return 0;
}
