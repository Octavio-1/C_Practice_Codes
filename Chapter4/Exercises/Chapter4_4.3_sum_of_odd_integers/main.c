#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int count;
    for(count = 1; count <= 99; count+=2){
      sum += count;
      printf("%d\n",sum);
    }
    return 0;
}
