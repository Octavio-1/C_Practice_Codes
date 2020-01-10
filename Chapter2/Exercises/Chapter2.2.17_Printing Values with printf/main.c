#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one = 1, two = 2, three = 3, four = 4;

    //using one pritnf no conversion specifier
    printf("1" "2" "3" "4\n");

    //using one printf with four conversion specifiers
    printf("%d%d%d%d\n",one,two,three,four);

    //using four printf
    printf("1");
    printf("2");
    printf("3");
    printf("4");
    return 0;
}
