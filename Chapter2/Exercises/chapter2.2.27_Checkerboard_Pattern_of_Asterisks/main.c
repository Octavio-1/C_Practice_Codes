#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printing symbol with 8 printf statements
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf(" %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf(" %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf(" %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*');
    printf(" %c  %c  %c  %c  %c  %c  %c  %c", '*', '*','*','*','*','*','*','*');

    //printing symbols with fewer printf statements
    printf("\n\n\n%c  %c  %c  %c  %c  %c  %c  %c\n %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*');
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*');
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*');
    printf("%c  %c  %c  %c  %c  %c  %c  %c\n %c  %c  %c  %c  %c  %c  %c  %c\n", '*', '*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*');

    return 0;
}
