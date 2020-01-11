#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;

    for(counter = 0;counter <= 10;counter++){

    printf("%d\n",2 * (1+rand()%5));

     }

    printf("\n\n\n");

    for(counter = 0;counter <= 10;counter++){

    printf("%d\n",2 * (1+rand()%5) + 1);

     }

    printf("\n\n\n");

    for(counter = 0;counter <= 10;counter++){

    printf("%d\n",(2 *(1+rand()%5) + 1)*2);

     }

    printf("\n\n\n");

    return 0;
}
