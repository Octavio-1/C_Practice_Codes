#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("!!!!!<<<<<ENCRYPTION APP>>>>>!!!!!\n");

    int a,b,c,d,x;
    //encrypted digits declaration
    int r,s,t,v;

    printf("Enter the four digit integer to be encrypted:");
    //unencrypted digit declaration


    scanf( "%d", &x); //retrieve integer from user

    //Splitting integer into single digits
    a =  x % 10;
    b = (x /10)%10;
    c = (x /100)%10;
    d = (x / 1000)%10;
    //Applying Encryption algorithm to each digit
     r = ((d + 7)/10)%10;
     s = ((c + 7)/10)%10;
     t = ((b + 7)/10)%10;
     v = ((a + 7)/10)%10;
     printf("%d%d%d%d",t,v,r,s); //rearranging and printing encrypted digit


    return 0;
}
