#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int acct1, acct2, acct3;
    int crlimtbf1, crlimtbf2, crlimtbf3;
    int new_crlimtbf1, new_crlimtbf2, new_crlimtbf3;
    int bal1, bal2, bal3;

    for(count = 1; count <= 3; count++){

        if(count == 1){

        printf("enter account number %d\n",count);
        scanf("%d",&acct1);
        printf("enter credit limit for 1st customer(before recession)\n",count);
        scanf("%d",&crlimtbf1);
        printf("enter account balance for 1st customer\n",count);
        scanf("%d",&bal1);
        new_crlimtbf1 = crlimtbf1/2;
        }

        if(count == 2){

        printf("enter account number %d\n",count);
        scanf("%d",&acct2);
        printf("enter credit limit for 2nd customer(before recession)\n",count);
        scanf("%d",&crlimtbf2);
        printf("enter account balance for 2nd customer\n",count);
        scanf("%d",&bal2);
        new_crlimtbf2 = crlimtbf2/2;
        }

        if(count == 3){

        printf("enter account number %d\n",count);
        scanf("%d",&acct3);
        printf("enter credit limit for 3rd customer(before recession)\n",count);
        scanf("%d",&crlimtbf3);
        printf("enter account balance for 3rd customer\n",count);
        scanf("%d",&bal3);
        new_crlimtbf3 = crlimtbf3/2;
        }
    }

    if(bal1 > new_crlimtbf1 || bal2 > new_crlimtbf2 || bal3 > new_crlimtbf3 ){

    if(bal1 > new_crlimtbf1){

        printf("\nAccount number %d has exceeded credit limit under new regime",acct1);
    }

    if(bal2 > new_crlimtbf2){

             printf("\nAccount number %d has exceeded credit limit under new regime",acct2);
        }

    if(bal3 > new_crlimtbf3){

             printf("\nAccount number %d has exceeded credit limit under new regime",acct3);
        }

    }

        else
        {
            printf("\nAll Accounts are clear");
        }


    return 0;
}
