#include <stdio.h>
#include <stdlib.h>
int power(int base, int exponent);

int main()
{
    int ans,bse,exp;
    printf("Enter the power and the base:\n");
    scanf("%d%d",&bse,&exp);
    ans = power(bse,exp);
    printf("%d",ans);

    return 0;
}
int power(int base, int exponent){

    if(exponent == 1)

        return base;

    if(exponent == 0)

        return 1;

    else
        return base * power(base,exponent - 1);

}
