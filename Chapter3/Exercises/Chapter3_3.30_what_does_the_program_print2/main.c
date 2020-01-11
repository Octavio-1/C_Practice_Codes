#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 10;
    int count = 0;
    int column;

    while( row >= 1 ){
        column = 1;

        while( column <= 10 ){
           printf("%s\n",row % 2 ? "<": ">");
           column++;
        }

        row--;
        printf("\n");
    }
    return 0;
}
