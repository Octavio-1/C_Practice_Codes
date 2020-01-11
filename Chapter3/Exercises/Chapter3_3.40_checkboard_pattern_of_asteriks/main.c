#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter1,counter2;

    for(counter1 = 1; counter1 <= 8; counter1++){
        for(counter2 = 1; counter2 <= 8; counter2++){
            if(counter1 % 2 == 0 && counter2 == 1){
                printf(" ");
                printf("* ");
            }

            else
                printf("* ");

    }

    printf("\n");

}

    return 0;
}
