#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("%s\t%s\t%s\t%s\n\n","N","N*10","N*100","N*1000");

    for(N = 1; N <= 10; N++){

        printf("%d\t%d\t%d\t%d\n",N,N*10,N*100,N*1000);
    }

    return 0;
}
