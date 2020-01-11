#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    int n = 0;

    srand(time(NULL));

    for(counter = 0;counter <= 10;counter++)

    printf("%d\n",1 + rand()%2);
    printf("\n\n\n\n");

    for(counter = 0;counter <= 10;counter++)

    printf("%d\n",1 + rand()%100);
    printf("\n\n\n\n");

    for(counter = 0;counter <= 10;counter++)

    printf("%d\n",rand()%10);
    printf("\n\n\n\n");

    for(counter = 0;counter <= 10;counter++)

    printf("%d\n",1000 + rand()%113);
    printf("\n\n\n\n");

    for(counter = 0;counter <= 10;counter++)

    printf("%d\n", -1 + rand()%3);
    printf("\n\n\n\n");

    for(counter = 0;counter <= 10;counter++)

    printf("%d\n", -3 + rand()%15);
    return 0;
}
