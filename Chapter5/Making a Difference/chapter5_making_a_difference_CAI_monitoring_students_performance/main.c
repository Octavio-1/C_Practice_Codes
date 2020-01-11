#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num1,num2,product,ans,responseP,responseF,n;
void question();
int main()
{
    char end;


    while(end != 'e'){
       int correctAns = 0;
       int wrongAns = 0;

        for(n = 1; n <= 10; n++){
        srand(time(NULL));
        question();
        scanf("%d",&ans);
        if(ans == product )
        {
            correctAns++;
            //printf("Keep up the good work!\n");
        }
        else
         {
            wrongAns++;
          }
    }
      //  }
        if((correctAns) >= 7.5){

            printf("Congratulations,  you are ready to go to the next level!\n");
            printf("enter e to end program. Enter any other key for next student\n");
            scanf(" %c",&end);
        }
        else
        {

            printf("Please ask your teacher for extra help\n");
            printf("enter e to end program. Enter any other key for next student\n");
            scanf(" %c",&end);
        }


    }

    return 0;


}
void question(){
    num1 = 1 + (rand()% 9);
    num2 = 1 + (rand()% 9);
    product = num1 * num2;
    printf("how much is %d times %d\n", num1,num2);
    }
