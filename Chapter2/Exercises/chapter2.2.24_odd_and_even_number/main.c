#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please enter the number:\n");
    scanf("%d",&number);

    if(number % 2 == 0){

        printf("%d is an even number",number);
    }

    else

        printf("%d is *not* an even number",number);

    return 0;
}
