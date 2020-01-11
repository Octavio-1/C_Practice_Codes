#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 0;
   printf("%f\n",fabs(7.5));
   printf("%f\n",floor(7.5));
   printf("%f\n",fabs(0.0));
   printf("%f\n",ceil(0.0));
   printf("%f\n",fabs(-6.4));
   printf("%f\n",ceil(-6.4));
   printf("%f\n",-fabs( -8 + floor( -5.5 ) ));



    return 0;
}
