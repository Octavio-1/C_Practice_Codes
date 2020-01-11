#include <stdio.h>
#include <stdlib.h>

void prime(int number,int *count);
int main()
{
    int counter = 0;
    int n;
    for(n = 2; n <= 10000; n++)

            //counter++;

            prime(n,&counter);

    return 0;
}
void prime(int number,int *count){


        if(number == 2 || number == 3 || number == 5 || number == 7){

            ++*count;

            printf("%d is a prime   %d\n",number,*count);

        }

        else

           if(number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0){

            ++*count;

            printf("%d is a prime    %d\n",number,*count);

        }

    }


