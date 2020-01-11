#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    long int factorial  = 1;
    int n;// number whose factorial is to be computed
    while(n != -1){
        int factorial  = 1;
        printf("Enter the number to be computed(enter -1 to end)\n");
        scanf("%d",&n);
        for(counter = n;counter >= 1;counter--){

            factorial *= counter;
        }
        printf("Factorial = %d\n",factorial);
    }
    return 0;
}
