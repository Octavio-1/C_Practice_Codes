#include <stdio.h>
#include <stdlib.h>
//This program i written to demonstrate how the use of "continue" can be eliminated via the meticulous use of the "if" statement
int main()
{
    int counter;

    for(counter = 1;counter < 11;counter++){
        if(counter < 5 || counter > 5){
            printf("%d ",counter);
        }
    }
    return 0;
}
