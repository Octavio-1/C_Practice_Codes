#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("!!!!!<<<<<DECRYPTION APP>>>>>!!!!!\n");
     //Encrypted Integer and integer digit declaration
     int r,s,t,v,x;
     //decrypted integer digit declaration
     int a,b,c,d;
     //retrieve integer from user
     printf("Enter the four digit integer for decryption:");
     scanf( "%d", &x);

     //Splitting encrypted integer in single digits
     t =  x % 10;
     v = (x /10)%10;
     r = (x /100)%10;
     s = (x / 1000)%10;

     //Applying Decryption Algorithm
     a = (-7 + 10 + s) % 10;
     b = (-7 + 10 + r) % 10;
     c = (-7 + 10 + v) % 10;
     d = (-7 + 10 + t) % 10;

    //Rearranging and printing decrypted data
    printf("%d%d%d%d",c,d,a,b);



    return 0;
}
