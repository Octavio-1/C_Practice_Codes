#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fairTax,housing,food,clothing,transportation,education,miscellaneous,health_care,vacation;
    printf("<<<<<!!!THE FAIR TAX APP!!!>>>>>\n");
    printf("Enter your housing expense : ");
    scanf("%f",&housing);
    printf("Enter your food expense : ");
    scanf("%f",&food);
    printf("Enter your clothing expense : ");
    scanf("%f",&clothing);
    printf("Enter your transportation expense : ");
    scanf("%f",&transportation);
    printf("Enter your education expense : ");
    scanf("%f",&education);
    printf("Enter your miscellaneous expense : ");
    scanf("%f",&miscellaneous);
    printf("Enter your health care expense : ");
    scanf("%f",&health_care);
    printf("Enter your vacation expense : ");
    scanf("%f",&vacation);
    fairTax = housing + food + clothing + transportation + education + miscellaneous + health_care + vacation;
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("Your payable fair tax is : %.2f ", fairTax);
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    return 0;
}
