#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num1,num2,product,ans,responseP,responseF,diffLevel,sum,sub,random;
void question();
void question2();
void question3();
int main()
{
    char end;

    while(end != 'e')
    {
        printf("Please enter difficulty level 1,2,3 or 4\n");
        scanf("%d",&diffLevel);
        srand(time(NULL));
        switch(diffLevel){
        case 1:
        question();
        break;
        case 2:
        questionAdd();
        break;
        case 3 :
        questionSub();
        break;
        case 4 :
            random = 1 + rand() % 3;
            switch(random){
            case 1:
            question();
            break;
            case 2:
            questionAdd();
            break;
            case 3 :
            questionSub();
            break;
                     }
        }

        scanf("%d",&ans);

        if(ans == product || ans == sum || ans == sub )
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

            if(diffLevel == 1){
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
                }
            else if(diffLevel == 2){

                while(ans != sum){
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
                        printf("how much is %d plus %d\n", num1,num2);
                        scanf("%d",&ans);
                    }

            }
            else if(diffLevel == 3){
                while(ans != sub){

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
                printf("how much is %d minus %d\n", num1,num2);
                scanf("%d",&ans);

            }

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
void questionAdd()
{
    num1 = 1+(rand()%9);
    num2 = 1+(rand()%9);
    sum = num1 + num2;
    printf("how much is %d plus %d\n", num1, num2);
}
void questionSub()
{
    num1 = 1+(rand()%9);
    num2 = 1+(rand()%9);
    sub = num1 - num2;
    printf("how much is %d minus %d\n", num1, num2);
}


