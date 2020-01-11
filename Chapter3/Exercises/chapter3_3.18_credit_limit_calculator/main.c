#include <stdio.h>
#include <stdlib.h>

int main()
{
    int new_balance;
    int account_number;
    int beginin_balance;
    int total_charges;
    int total_credits;
    int credit_limit;

    while( account_number != -1 ){
        printf("enter value for account number(-1 to end): ");
        scanf("%d",&account_number);
        if( account_number != -1){
        printf("enter value for begining_balance: ");
        scanf("%d",&beginin_balance);
        printf("enter value for total charges: ");
        scanf("%d",&total_charges);
        printf("enter value for total credits: ");
        scanf("%d",&total_credits);
        printf("enter value for credit limit: ");
        scanf("%d",&credit_limit);
        printf("\n");
        new_balance = beginin_balance + total_charges - total_credits;
        if( new_balance > credit_limit){
            printf("Account:%d        \n",account_number);
            printf("Credit limit:%d        \n",credit_limit);
            printf("Balance:%d        \n",new_balance);
            printf("Credit limit exceeded!\n\n");
        }
    }
}
    return 0;


}
