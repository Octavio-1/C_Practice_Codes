#include <stdio.h>
#include <stdlib.h>

int qualityPoints(int average);

int main()
{
    int average;
    printf("Enter the average to be computed:");
    scanf("%d",&average);

    printf("The grade for the average is:%d",qualityPoints(average));

    return 0;
}

int qualityPoints(int average){

    if(average >= 90 && average <= 100)

        return 4;

    if(average >= 80 && average <= 89)

        return 3;

   if(average >= 70 && average <= 79)

        return 2;

    if(average >= 60 && average <= 69)

        return 1;

    if(average < 60)

        return 0;

}
