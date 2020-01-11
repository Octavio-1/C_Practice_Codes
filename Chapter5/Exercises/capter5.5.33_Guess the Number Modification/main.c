#include <stdio.h>
#include <stdlib.h>

int guess();

int main()
{
    char check = 't';
    int answer = 0, guessedNumner;
    int count = 0;

    guessedNumner = guess();
    scanf("%d",&answer);
    count++;

    while(check != 'n'){

            check = 't';
            if(guessedNumner > answer){

                count++;
                printf("Too low try again\n");
                scanf("%d",&answer);

            }

            else
            if(guessedNumner < answer){

                count++;
                printf("Too high try again\n");
                scanf("%d",&answer);
            }
            else
            {

            if(count < 10){

                    printf("Either you know the secret or you got lucky!\n\n");
            }

            if(count > 10){

                    printf("You should be able to do better!\n\n");
            }

            if(count == 10){

                printf("Ahah! You know the secret!\n\n");
            }

            else{
                printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?\n");
                scanf(" %c",&check);
               }
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
