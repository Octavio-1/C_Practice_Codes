#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int amount;
    int principal = 100000;
    int rate = 5;
    int year;

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for( year = 1; year <= 10; year++ ) {

            amount = principal * pow( 1 + rate, year );

            printf( "%4d%21d\n", year, amount );

    }

    return 0;
}
