#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(x <= 20){

            if(x % 5 == 0){
                if(x > 1){
                printf("%d\t",x);
                printf("\n");
                }
            }
    else
         printf("%d\t",x);

            x++;
    }
    return 0;
}
