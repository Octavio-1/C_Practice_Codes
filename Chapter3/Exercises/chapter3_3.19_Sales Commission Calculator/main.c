#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gross_sales, salary;
    int commission = 200;

    while(gross_sales != -1){

            printf("enter value for gross sales: ");
            scanf("%d",&gross_sales);
            if(gross_sales != -1){
                salary = commission + 0.09 * gross_sales;
                printf("salary:%d \n\n",salary);
            }

    }

    return 0;
}
