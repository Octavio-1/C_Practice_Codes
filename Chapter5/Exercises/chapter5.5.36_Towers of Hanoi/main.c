#include <stdio.h>
#include <stdlib.h>
void hanoi(int toBeMoved,char initPeg,char finPeg,char temPeg);
int main()
{
    int discs = 64;
    char temp = 'B';
    char firstPeg = 'A';
    char thirdPeg = 'C';

    hanoi(discs,firstPeg,thirdPeg,temp);

    return 0;
}
void hanoi(int toBeMoved,char initPeg,char finPeg,char temPeg){

    printf("\ndone");

    if(toBeMoved == 1){

        printf("\ndisc 1 is moved from %c --> %c",initPeg,finPeg);
        return;
    }

    hanoi(toBeMoved -1,initPeg,temPeg,finPeg);
    printf("\ndisc %d is moved from %c --> %c",toBeMoved,initPeg,finPeg);
    hanoi(toBeMoved -1,temPeg,finPeg,initPeg);

}
