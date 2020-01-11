#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int num1, num2, num3, num4, num5;

        printf("enter 1st number \n");
        scanf("%d",&num1);
        printf("enter 2nd number\n");
        scanf("%d",&num2);
        printf("enter 3rd number\n");
        scanf("%d",&num3);
        printf("enter 4th number\n");
        scanf("%d",&num4);
        printf("enter 5th number\n",count);
        scanf("%d",&num5);

    if(num1 <= 30 && num2 <= 30 && num3 <= 30 &&  num4 <= 30 && num5 <= 30){

        for(count = 1;count <= num1; count++){
            printf("%c",'*');
        }
        printf("\n");

        for(count = 1;count <= num2; count++){
            printf("%c",'*');
        }
        printf("\n");

        for(count = 1;count <= num3; count++){
            printf("%c",'*');
        }
        printf("\n");

        for(count = 1;count <= num4; count++){
            printf("%c",'*');
        }
        printf("\n");

        for(count = 1;count <= num5; count++){
            printf("%c",'*');
        }
        printf("\n");

    }
    else
        printf("One or more of the numbers is greater than 30");
    return 0;
}
