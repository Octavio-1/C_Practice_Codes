#include <stdio.h>
#include <stdlib.h>

int guess();

int main()
{
    char check = 't';
    int answer = 0, guessedNumner;

    guessedNumner = guess();
    scanf("%d",&answer);

    while(check != 'n'){

            check = 't';
            if(guessedNumner > answer){

                printf("Too low try again\n");
                scanf("%d",&answer);
            }

            else
            if(guessedNumner < answer){

                printf("Too high try again\n");
                scanf("%d",&answer);
            }

            else
            {
               printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?\n");
               scanf(" %c",&check);
            }

            if(check == 'y'){

                guessedNumner = guess();
                scanf("%d",&answer);
            }

        }
       return 0;
}
int guess(){

    int number = 0;
    srand(time(NULL));
    number = 1 + rand() % 1000;
    printf("I have a number between 1 and 1000\nCan you guess my number?\nPlease type your first guess\n");
    printf("%d\n",number);
    return number;
}
