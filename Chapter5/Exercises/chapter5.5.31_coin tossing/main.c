#include <stdio.h>
#include <stdlib.h>

int flip();

int main()
{
    int counter;
    int Tails = 0;
    int Heads = 0;
    int toss = 0;

    for(counter = 1; counter <= 100; counter++){

        toss = flip();

        if(toss == 0){

           printf("Heads\n");
           ++Heads;
        }

        else{

            printf("Tails\n");
            ++Tails;
        }
    }


    printf("Tails:%d\n",Tails);
    printf("Heads:%d",Heads);

    return 0;
}

int flip(){

     return rand() % 2;

}

