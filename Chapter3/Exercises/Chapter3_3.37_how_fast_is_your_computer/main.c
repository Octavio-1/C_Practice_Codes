#include <stdio.h>
#include <stdlib.h>

int main()
{   int count = 0;
    while(count < 300000000){
        count++;
        if(count == 100000000){
            printf("marked*\n");
        }
    }
    return 0;
}
