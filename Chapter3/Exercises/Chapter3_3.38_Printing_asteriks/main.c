#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    for(count = 1;count <= 100;count++){
        printf("*");
        if(count % 10 == 0){
            printf("\n");
        }
    }

    return 0;
}
