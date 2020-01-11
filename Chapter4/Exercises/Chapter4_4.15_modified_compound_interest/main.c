#include <stdio.h>
#include <stdlib.h>

int main()
{
    double amount;
    double principal = 1000.0;
    double rate = 0.05;
    int year;

    printf("%4s%21s\n","Year","Amount on deposit");

    for(year = 1;year<= 10;year++){

            for(rate = 0.05; rate <= 0.1; rate += 0.01)

        amount = principal * pow(1.0 + rate,year);

        printf("%4d%21.2f\n",year, amount);
    }
    return 0;
}
