#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num1,num2,product,ans;
void question();
int main()
{
    char end;
    while(end != 'e')
    {
        srand(time(NULL));
        question();
        scanf("%d",&ans);
        if(ans == product )
        {
            printf("Very good!\n");
        }
        else
          {
            while(ans != product)
                  {
                    printf("No.Please try again\n");
                    printf("how much is %d times %d\n", num1,num2);
                    scanf("%d",&ans);
                  }
            printf("Very good\n");
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
