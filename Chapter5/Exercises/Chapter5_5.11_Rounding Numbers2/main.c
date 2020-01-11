#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float roundToInteger( float x );
float roundToTenths( float x );
float roundToHundreths( float x );
float roundToThousandths( float x );

int main()
{
    float number;
    printf("Enter the integer\n");
    scanf("%f",&number);
    roundToInteger(number);
    printf("roundToInteger:%.3f\n",roundToInteger(number));
    roundToTenths(number);
    printf("roundToTenths:%.3f\n",roundToTenths(number));
    roundToHundreths(number);
    printf("roundToHundreths:%.3f\n",roundToHundreths(number));
    roundToThousandths(number);
    printf("roundToThousandths:%.3f\n",roundToThousandths(number));

    return 0;
}

float roundToInteger( float x ){

    return floor(x  + .5);
}
float roundToTenths( float x ){

    return floor(x * 10 + .5)/10;
}
float roundToHundreths( float x ){

    return floor(x * 100 + .5)/100;
}
float roundToThousandths( float x ){

    return floor(x * 1000 + .5)/1000;
}

