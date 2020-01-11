#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int counter = 1;
    int n;// number whose factorial is to be computed
    float x;


    while(n != -1){

        float e = 1;
        printf("Enter the number of terms to be computed(enter -1 to end)\n");
        scanf("%d",&n);
        printf("Enter the value of x\n");
        scanf("%f",&x);

        for(counter = 1;counter <= n;counter++){

            float factorial  = 1.0;
            factorial *= counter;

            if(counter <= n){

                e += pow(x,counter)/factorial;

            }

        }
              printf("Factorial(e) = %f\n",e);
    }
    return 0;
}
