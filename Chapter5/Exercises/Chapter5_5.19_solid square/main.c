#include <stdio.h>
#include <stdlib.h>

void square(int side);

int main()
{
    int integer = 0;
    while(integer != -1){

    printf("Enter the integer or -1 to end\n");
    scanf("%d",&integer);

     if(integer == -1){

        continue;
    }

  square(integer);

    }

    return 0;


}
void square(int side){

    int y = 0;
    int x = 0;

     for(y = 0; y < side; y++ ){

        for(x = 0; x < side; x++){

                printf("%c",'*');
          }

          printf("\n");
     }

}
