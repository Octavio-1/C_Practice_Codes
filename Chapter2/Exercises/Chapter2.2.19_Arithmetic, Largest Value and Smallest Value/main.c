#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,sum,product,average;
    printf("Enter the value of the 3 integers now: ");
    scanf("%d%d%d",&x,&y,&z);
    sum = x + y + z;
    product = x*y*z;
    average = (x+y+z)/3;
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    printf("average is %d\n", average);
    if (x < y){

        if (x < z){

            printf("smallest is %d\n ", x);
            if (y > z){

                printf("largest is %d\n ", y);
            }
            if (y < z){
                printf("largest is %d\n ", z);
            }

        }
    }
    if (y < z){
        if (y < x){
            printf("smallest is %d\n ", y);

            if (x > z){

                printf("largest is %d\n ", x);
            }
            if (x < z){
                printf("largest is %d\n ", z);
            }
        }
    }
    if (z < x){
        if (z < y){
            printf("smallest is %d\n ", z);

             if (x > y){

                printf("largest is %d\n ", x);
            }
            if (x < y){
                printf("largest is %d\n ", y);
            }
        }
    }


    return 0;
}
