#include <stdio.h>
#include <stdlib.h>
void decimal2roman(int num);

int main()
{
    int num = 0;
    for(num = 1; num <= 100; num++){

        decimal2roman(num);
    }
    return 0;
}
void decimal2roman(int num){


    int  i = 0;
    int  decimals[] = {100,90,50,40,10,9,5,4,1};
    char *numerals[] = {"C","XC","L","XL","X","IX","V","IV","I"};

        while(num){

             while(num/decimals[i]){

                    printf("%s",numerals[i]);
                    num -= decimals[i];
            }

                i++;
        }
        printf("\n");
}

