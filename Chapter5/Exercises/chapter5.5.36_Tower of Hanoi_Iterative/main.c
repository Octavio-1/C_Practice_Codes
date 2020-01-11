#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int discs = 1;
    char temPeg = 'B';
    char firstPeg = 'A';
    char thirdPeg = 'C';

    for(discs = 1; discs <= pow(2,discs) - 1; discs++){

        if(discs % 3 == 1){

           printf("\ndisc  is moved from %c --> %c",firstPeg,thirdPeg);

        }

        if(discs % 3 == 2){

           printf("\ndisc 1 is moved from %c --> %c",firstPeg,temPeg);

        }

        if(discs % 3 == 0){

           printf("\ndisc 1 is moved from %c --> %c",temPeg,thirdPeg);

        }
    }

    return 0;
}
