#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    printf("%d\n",--i); //expected answer is 9 due to predecrementing
    // i is now equal to 9
    printf("%d\n",i--); // expected answer is 9 instead of 8 due to postdecrementing
    printf("%d\n",i); //now u get 8!
    return 0;
}
