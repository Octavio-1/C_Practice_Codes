#include <stdio.h>
#include <stdlib.h>
int main()

{   /*variable declarations */
    float growthRate,population,population1,population2,population3,population4,population5;

    printf("!!!!!<<<<<WORLD POULATION GROWTH APP>>>>>!!!!!\n"); //App Name

    //retriving user information
    printf("Enter current world population:");
    scanf("%f", &population);
    printf("Enter current growth rate:");
    scanf("%f", &growthRate);
    //Calculating population growth
    population1 = ((growthRate/100) * population) + population;     //population after a year
    population2 = ((growthRate/100) * population1) + population1;   //population after two years
    population3 = ((growthRate/100) * population2) + population2;   //population after three years
    population4 = ((growthRate/100) * population3) + population3;   //population after four years
    population5 = ((growthRate/100) * population4) + population4;   //population after five years
    //Printing results
    printf("current world population is %.0f\n", population);
    printf("population after a year is %.0f\n",population1);
    printf("population after two years is %.0f\n",population2);
    printf("population after three years is %.0f\n",population3);
    printf("population after four years is %.0f\n",population4);
    printf("population after five years is %.0f\n",population5);
    return 0;
}
