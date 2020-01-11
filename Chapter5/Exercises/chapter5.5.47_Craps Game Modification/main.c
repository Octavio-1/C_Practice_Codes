#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int craps(void);
int rollDice(void);

int main( void )
{
    int bankBalance = 1000;
    int wager = 10000;
    int result;

    while(wager > bankBalance){

        printf("Enter your wager(<= 1000):");
        scanf("%d",&wager);
    }
    while(bankBalance > 0 ){

        result = craps();

        if(result == 1){

            printf("You're up big. Now's the time to cash in your chips!\n");
            bankBalance += wager;
            printf("New Balance:%d\n",bankBalance);
            printf("Enter your new wager(<= %d):",bankBalance);
            scanf("%d",&wager);
            if(wager < 0.5 * bankBalance){
                printf("Aw c'mon, take a chance!\n");
            }
}

        if(result == 0){

            printf("Oh, you're going for broke, huh?\n");
            bankBalance -= wager;
            printf("New Balance:%d\n",bankBalance);

            if(bankBalance <= 0){

                printf("Sorry. You busted!\n");
            }
            else
                printf("Enter your new wager(<= %d):",bankBalance);
                scanf("%d",&wager);
        }

    }

    return 0;
}

int craps(void)
  {
    int sum;
    int myPoint;

    enum Status gameStatus;

    srand(time(NULL));

    sum = rollDice();

    switch(sum) {

    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf( "Point is %d\n", myPoint );
        break;
    }

   while ( gameStatus == CONTINUE ){


    sum = rollDice();

    if (sum == myPoint) {
        gameStatus = WON;
    }

    else{
        if (sum == 7) {
            gameStatus = LOST;
        }
    }
   }
  if (gameStatus == WON){
    printf("Player wins\n");
    return 1;
  }
  else {
    printf("Player losses\n");
    return 0;
  }
}

int rollDice(void){

    int die1;
    int die2;
    int workSum;

    die1 = 1 + (rand()%6);
    die2 = 1 + (rand()%6);
    workSum = die1 + die2;

    printf("Player rolled %d + %d = %d\n", die1,die2,workSum);
    return workSum;

}
