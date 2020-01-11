#include <stdio.h>
#include <stdlib.h>
double fibonacci(int n);
int main()
{
    int number;
    printf("Enter the fibonacci number\n");
    scanf("%d",&number);
    printf("The %ld fibonacci number is:%d",number,fibonacci(number));
    getchar();
    return 0;
}
double fibonacci(int n){

    int counter = 0;
    double answer = 0;
    double hold1 = 1;
    double hold = 0;

            if( n == 1){

            return hold;
            }

            else

                if( n == 2){

            return hold1;

            }

            else

            for(counter = 3; counter <= n; counter++){

                answer = hold + hold1;
                hold = hold1;
                hold1 = answer;
            }

    return hold1;

}
