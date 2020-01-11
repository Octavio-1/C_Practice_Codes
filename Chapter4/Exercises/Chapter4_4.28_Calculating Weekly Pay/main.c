#include <stdio.h>
#include <stdlib.h>

int main()
{
    int manager_pay, h_worker_pay, com_workers_pay, piece_worker_pay;
    int fixed_work_wage, overtime;
    int gross_pay;
    int items_made, pay_per_item;
    int paycode;

    while(paycode != 0){

    printf("enter paycode(enter 0 to end):");
    scanf("%d",&paycode);

    switch(paycode){

    case 1:

        printf("enter managers weekly pay:");
        scanf("%d",&manager_pay);
        printf("Manager's pay is:$%d\n",manager_pay);
        break;

    case 2:

        printf("enter hourly worker fixed work wage:");
        scanf("%d",&fixed_work_wage);
        printf("enter enter hourly worker's overtime:");
        scanf("%d",&overtime);

        h_worker_pay = fixed_work_wage + overtime * fixed_work_wage * 1.5;

        printf("Hourly worker's pay is:$%d\n",h_worker_pay);

    case 3:

       printf("enter gross sales for commission worker:");
       scanf("%d",&gross_pay);

       com_workers_pay = 250 + .57 * gross_pay;

       printf("commission workers pay is:$%d\n",com_workers_pay);

       break;

    case 4:

        printf("enter number of items made by pieceworker:");
        scanf("%d",&items_made);
        printf("enter pay per item item made:");
        scanf("%d",&pay_per_item);

        piece_worker_pay = items_made * pay_per_item;

        printf("pieceworker's pay is:$%d\n",piece_worker_pay);

        break;

    default:

        paycode = 0;
        break;

          }
    }
    return 0;
}
