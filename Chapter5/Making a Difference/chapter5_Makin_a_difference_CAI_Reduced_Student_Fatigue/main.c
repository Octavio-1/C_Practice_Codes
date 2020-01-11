#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num1,num2,product,ans,responseP,responseF;
void question();
int main()
{   srand(time(NULL));
    char end;
    while(end != 'e')
    {
        srand(time(NULL));
        question();
        scanf("%d",&ans);
        if(ans == product )
        {
        responseP = 1 + (rand()%4);
        switch(responseP){

        case 1 :
            printf("Very good!\n");
            break;
        case 2 :
            printf("Excellent!\n");
            break;
        case 3 :
            printf("Nice Work!\n");
            break;
        case 4 :
            printf("Keep up the good work!\n");
            break;

            }
        }
        else
          {
            while(ans != product){

            responseF = 1 + (rand()%4);
            switch(responseF){
                    case 1 :
            printf("No try again!\n");
            break;
        case 2 :
            printf("Wrong.Try once more!\n");
            break;
        case 3 :
            printf("Dont give up!\n");
            break;
        case 4 :
            printf("No.Dont give up!\n");
            break;
            }
                    printf("how much is %d times %d\n", num1,num2);
                    scanf("%d",&ans);
                  }

             responseP = 1 + (rand()%4);
             switch(responseP){
        case 1 :
            printf("Very good!\n");
            break;
        case 2 :
            printf("Excellent!\n");
            break;
        case 3 :
            printf("Nice Work!\n");
            break;
        case 4 :
            printf("Keep up the good work!\n");
            break;
             }
          }
        printf("Enter 'e' to end or any other character to continue\n");
        scanf(" %c",&end);
    }

    return 0;
}
void question(){
    num1 = 1 + (rand()% 9);
    num2 = 1 + (rand()% 9);
    product = num1 * num2;
    printf("how much is %d times %d\n", num1,num2);
    }
