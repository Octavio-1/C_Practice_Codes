#include <stdio.h>
#include <stdlib.h>

float calculateCharges(float hours);
int main()
{
     float  hours1,hours2,hours3,charge1,charge2,charge3;
     printf("Enter the hours spent by the 1st Vehicle\n");
     scanf("%f",&hours1);
     charge1 = calculateCharges(hours1);

     printf("Enter the hours spent by the 2nd Vehicle\n");
     scanf("%f",&hours2);
     charge2 = calculateCharges(hours2);

     printf("Enter the hours spent by the 3rd Vehicle\n");
     scanf("%f",&hours3);
     charge3 = calculateCharges(hours3);

     printf("%-8s%10s%12s","Car","Hours","Charge\n");
     printf("%-8d%10.2f%10.2f\n",1,hours1,charge1);
     printf("%-8d%10.2f%10.2f\n",2,hours2,charge2);
     printf("%-8d%10.2f%10.2f\n",3,hours3,charge3);
     printf("%-8s%10.2f%10.2f\n","TOTAL", hours1+hours2+hours3, charge1+charge2+charge3);

   return 0;
}

float calculateCharges(float hours){

 if (hours == 24){

    return 10;
 }

 else if(hours < 24 && hours > 3){

        return 2 + (0.5 * (hours - 3));
 }

 else
 {
     return 2;
 }

 }
