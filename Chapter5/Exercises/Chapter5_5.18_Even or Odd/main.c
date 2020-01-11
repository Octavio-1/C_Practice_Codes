#include <stdio.h>
#include <stdlib.h>

int even(int n);

int main()
{
    int answer,integer;

    while(integer != -1){

    printf("Enter the integer or -1 to end\n");
    scanf("%d",&integer);

     if(integer == -1){

        continue;
    }

    answer = even(integer);

    if(answer == 1){

        printf("True, %d is an even number\n",integer);
    }

    else{

         printf("false, %d is not an even number\n",integer);
    }
}
    return 0;

}

int even(int n){

    if(n % 2 == 0){

        return 1;
    }

    else
        return 0;

}
