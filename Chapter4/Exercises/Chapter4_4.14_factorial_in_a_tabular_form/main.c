#include <stdio.h>
#include <stdlib.h>

int main()
{
        int factorial = 1;
        int counter = 1; // number whose factorial is to be computed
        printf("%s\t\t%s\n","NUMBER","FACTORIAL");

        for(counter = 1;counter <= 5;counter++){

            factorial *= counter;
            printf("%d\t\t%d\n",counter,factorial);

        }
    return 0;
}
