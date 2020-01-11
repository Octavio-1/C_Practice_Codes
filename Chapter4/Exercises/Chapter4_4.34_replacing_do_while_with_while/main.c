#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 10;
//initial condition fails; loop is not performed
    while(x > 10 ){

        printf("%d ",x);
        --x;
    }
//Replacing the above while statement with do...while will give an undesired result

    do{

        printf("%d ",x);

    }while(x > 10);

 //using continue control statement  to fix do..while equivalent of a while loop
     do{

        continue;
        printf("%d",x);

    }while(x < 10);



    return 0;
}
