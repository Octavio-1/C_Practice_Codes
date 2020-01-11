#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int a,b,c,d,e; //untested digits declaration
    int r,s,t,u,v; //tested digit declaration

    while(x != -1){

    printf("Enter the four digit integer to be tested(enter -1 to end):");
    scanf( "%d", &x); //retrieve integer from user
    //Splitting integer into single digits
    a =  x % 10;
    b = (x /10)%10;
    c = (x /100)%10;
    d = (x / 1000)%10;
    e = (x / 10000)%10;
    //Applying Encryption algorithm to each digit
     r = e;
     s = d;
     t = c;
     u = b;
     v = a;

     if(r == a && s == b && t == c && u == b && v == e){

     printf("The number is a palindrome!\n");
     }

     else{

        printf("The number is not a palindrome!\n");
     }

    }
    return 0;
}
