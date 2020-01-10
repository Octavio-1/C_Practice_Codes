#include <stdio.h>
#include <stdlib.h>

int main (void){
    printf("!!!!!<<<<<BMI CALCULATOR>>>>>!!!!!\n");
    int weight; //delcaration of weight variable
    int height; //declaration of height variable
    int BMI;    //delcaration of BMI variable

    //iput user data

    printf("enter your weight in kilograms:");
    scanf("%d",&weight);
    printf("enter your height in meters:");
    scanf("%d",&height);

    BMI = weight/(height*height); // formula for calculating BMI

    printf("Your BMI is:%d\n",BMI);


    printf("****************************************\n");
    printf("*              BMI VALUES              *\n");
    printf("*Underweight: less than 18.5           *\n");
    printf("*Normal:      between 18.5 and 24.9    *\n");
    printf("*Overweight:  between 25 and 29.9      *\n");
    printf("*Obese:       30 or greater            *\n");
    //printf("*                                     *\n*")
    //printf("*                                     *\n*")
    //printf("*                                     *\n*")
    printf("****************************************\n");

return 0;

}


















