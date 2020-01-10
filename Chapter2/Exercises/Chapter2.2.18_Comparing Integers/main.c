#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Enter the value of the 2 integers now: ");
    scanf("%d%d",&x,&y);

    if (x > y){

            printf("%d is larger than %d\n", x,y);
        }
        if (y > x) {

            printf("%d is larger than %d\n", y,x);
        }
        if (x==y){
            printf("the numbers are equal\n");
        }
    return 0;
}
