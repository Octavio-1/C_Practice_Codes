#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);

int main()
{
    int base, exponent,answer;
    printf("Enter the base and the exponent\n");
    scanf("%d\n",&base);
    scanf("%d",&exponent);
    answer = integerPower(base,exponent);
    printf("%\nThe answer is:%d",answer);

    return 0;
}

int integerPower(int base,int exponent){

  int n;
  int ans = 1;

  if(exponent == 0){

    return 1;

  }

  else if(exponent == 1){

    return base;
  }

  else{

        for(n = 1; n <= exponent; n++){

            ans *= base;

        }

  return ans;
  }

}
