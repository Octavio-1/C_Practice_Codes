#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A;
    printf("%s\t%s\t%s\t%s\n\n","A","A+2","A+4","A+6");
    for(A = 1; A <= 5; A++){
        printf("%d\t%d\t%d\t%d\n",A*3,((A*3)+2),((A*3)+4),((A*3)+6));
    }
    return 0;
}
