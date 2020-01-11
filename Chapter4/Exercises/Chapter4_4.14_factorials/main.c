#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial = 1;
    int counter;
    printf("%s\t\t%s\n","Factorial","Counter");
    for(counter = 1; counter <=5; counter++){

        factorial *= counter;
        printf("%d\t\t\t%d\n",counter,factorial);
    }
    return 0;
}
