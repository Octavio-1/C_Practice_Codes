#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a = 1;
    int b,c,largest;

    while( a != -1){
        printf("Enter the three numbers(enter -1 to end)\n");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

        if(a > b && a > c){
                if(a*a == b*b + c*c){
                    printf("The numbers represent three sides of a right angle\n\n");
                }
                else

                    printf("The numbers DO NOT represent three sides of a right angle\n\n");
        }

        else if(b > a && b > c){
           if(b*b == a*a + c*c){
                    printf("The numbers represent three sides of a right angle\n\n");
                }
                else

                    printf("The numbers DO NOT represent three sides of a right angle\n\n");

        }

        else{
           if(c*c == b*b + a*a){
                    printf("The numbers represent three sides of a right angle\n\n");
                }
                else
                    printf("The numbers DO NOT represent three sides of a right angle\n\n");
        }

    }

    return 0;
}
