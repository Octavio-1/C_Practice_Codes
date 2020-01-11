#include <stdio.h>
#include <stdlib.h>

int multiples(int factor,int multiple);

int main()
{
    int answer;
    int factor, multiple;
    printf("Enter the factor and the multiple\n");
    scanf("%d\n",&factor);
    scanf("%d",&multiple);
    answer = multiples(factor,multiple);
    if(answer == 1){
        printf("True, %d is a multiple of %d\n",multiple,factor);
    }
    else{
         printf("false, %d is not a multiple of %d\n",multiple,factor);
    }

    return 0;
}
int multiples(int factor,int multiple){

    if(multiple % factor == 0){

    return 1;
  }

  else{

    return 0;

  }

}
