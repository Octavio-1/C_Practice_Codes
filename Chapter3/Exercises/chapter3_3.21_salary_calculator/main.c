#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hours_worked;
   float salary, hourly_rate;

    while(hours_worked != -1){

            printf("enter value for hours worked(-1 to end): ");
            scanf("%d",&hours_worked);
            if(hours_worked != -1){

                printf("enter value for hourly rate($0.00): ");
                scanf("%f",&hourly_rate);

                if(hours_worked > 40){
                    salary = (40 * hourly_rate) + (hours_worked - 40)*hourly_rate*1.5;
                }
                else
                    salary = hourly_rate * hours_worked;


                printf("Salary is %.2f:\n\n",salary);

            }

    }

    return 0;
}
