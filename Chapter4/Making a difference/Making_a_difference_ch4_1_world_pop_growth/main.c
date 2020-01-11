#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("!!!!!<<<<<WORLD POULATION GROWTH APP>>>>>!!!!!\n"); //App Name
    float Year,growthRate,population,increase, dPopulation, dy, test;//declaration of variables

    //retriving user information
    printf("Enter current world population:");
    scanf("%f", &population);
    printf("Enter current growth rate:");
    scanf("%f", &growthRate);
    dPopulation = 2* population;
    printf( "%4s%21s%21s\n", "Year", "Total Population", "Increase" ); //Table Header

    // iteration for population and increase in population for 75 years
    for(Year = 2018; Year <= 2092; Year++){

        increase = population * (growthRate/100);

        population = population + increase;


        printf("%-4.0f%21.0f%21.0f\n",Year,population,increase);


if (floor(population/7600000000) == 2 ){

          dy = Year;

          break;
       }

    }

 for( Year = Year ;Year <= 2092; Year++){

        population = population + (population * (growthRate/100)); //

        increase = population * (growthRate/100);

        printf("%-4.0f%21.0f%21.0f\n",Year,population,increase);

    }

printf("The population doubles in the year %.0f\n",dy);

    return 0;



}



















   /*


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
    printf("%4d%30.0f\n",population);
    printf("current world population is %.0f\n", population);
    printf("population after a year is %.0f\n",population1);
    printf("population after two years is %.0f\n",population2);
    printf("population after three years is %.0f\n",population3);
    printf("population after four years is %.0f\n",population4);
    printf("population after five years is %.0f\n",population5);
    return 0;
}
*/
