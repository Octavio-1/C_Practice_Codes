#include <stdio.h>
#include <stdlib.h>

int main()
{
    int principal;
    float rate,term,interest;

    while(principal != -1){

            printf("enter value for principal: ");
            scanf("%d",&principal);

            if(principal != -1){

                printf("enter value for rate: ");
                scanf("%f",&rate);
                printf("enter value for term in days: ");
                scanf("%f",&term);
                interest = principal * rate * (term / 365);
                printf("interest: %f\n\n",interest);
            }

    }

    return 0;
}
