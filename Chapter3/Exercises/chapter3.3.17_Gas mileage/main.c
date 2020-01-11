#include <stdio.h>
#include <stdlib.h>

int main()
{

//declaation and initialization of variables
    float gallons_used;
    int miles_driven;
    float average;
    float running_average;
    float final_average;

    int n = 0;  //counter variable for average
    while(gallons_used != -1){

        printf("Enter value of gallons used(-1 to end)\n");
        scanf("%f",&gallons_used);
        if(gallons_used != -1){

            printf("Enter value of miles_driven\n");
            scanf("%d",&miles_driven);

            average = gallons_used / miles_driven;
            printf("The miles / gallon for this tank was %f\n",average);
            ++n;
            running_average += average;

       }
    }
//calculating and printing final average
    final_average = running_average/n;
    printf("The overall average miles/gallon was %.2f",final_average);
    return 0;
}
