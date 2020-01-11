#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num1,num2,product,ans,responseP,responseF,diffLevel;
void question();
void question2();
void question3();
int main()
{
    char end;
    printf("Please enter difficulty level 1,2 or 3\n");
    scanf("%d",&diffLevel);
    while(end != 'e')
    {
        srand(time(NULL));
        switch(diffLevel){
        case 1:
        question();
        break;
        case 2:
        question2();
        break;
        case 3 :
        question3();
        break;
        default:
            break;
        }
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
void question2()
{
    num1 = 10+(rand()%90);
    num2 = 10+(rand()%90);
    product = num1 * num2;
    printf("how much is %d times %d\n", num1, num2);
}
void question3()
{
    num1 = 100+(rand()%900);
    num2 = 100+(rand()%900);
    product = num1 * num2;
    printf("how much is %d times %d\n", num1, num2);
}
