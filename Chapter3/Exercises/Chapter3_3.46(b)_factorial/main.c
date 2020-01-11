#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    int n;// number whose factorial is to be computed

    while(n != -1){

        float e = 1;
        printf("Enter the number of terms to be computed(enter -1 to end)\n");
        scanf("%d",&n);

        for(counter = 1;counter <= n;counter++){

            float factorial  = 1.0;
            factorial *= counter;

            if(counter <= n){
                e += 1.0/factorial;

            }

        }
              printf("e = %f\n",e);
    }
    return 0;
}
