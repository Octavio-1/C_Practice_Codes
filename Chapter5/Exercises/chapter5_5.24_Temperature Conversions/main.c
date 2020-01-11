#include <stdio.h>
#include <stdlib.h>

int celcius(int farenheit);
int farenheit(int celcius);

int main()
{
    int n;
    printf("%-10s%15s\t\t%-10s%15s\n","CELCIUS","FARENHEIT","FARENHEIT","CELCIUS");

    for(n = 0; n <= 100; n++){

      printf("%-10d%8d",n,farenheit(n));
      printf("\t\t%10d%17d\n",farenheit(n),celcius(farenheit(n)));

    }

    return 0;
}

int celcius(int farenheit){

    return (farenheit - 32) * 5/9;

}


int farenheit(int celcius){

    return (celcius * 1.8) + 32;

}
