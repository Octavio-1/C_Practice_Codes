#include <stdio.h>
#include <stdlib.h>

void square(int side, char fillCharacter);
void l_shape(int side, char fillCharacter);
void triangle(int side, char fillCharacter);

int main()
{
    int integer = 0;
    while(integer != -1){

    printf("Enter the integer or -1 to end\n");
    scanf("%d",&integer);

     if(integer == -1){

        continue;
    }

  square(integer,'+');
  l_shape(integer,'*');

    }

    return 0;

}

void square(int side,char fillCharacter){

    int y = 0;
    int x = 0;

     for(y = 0; y < side; y++ ){

        for(x = 0; x < side; x++){

                printf("%c",fillCharacter);
          }

          printf("\n");
     }

     printf("\n\n");

}

void l_shape(int side,char fillCharacter){

    int y = 0;
    int x = 0;

     for(y = 0; y < side + 3; y++ ){

            if(y <= side - 1){

                 for(x = 0; x < side; x++){

                 printf("%c",fillCharacter);

            }

        }

            else{

                for(x = 0; x < side + 5; x++){

                 printf("%c",fillCharacter);
              }

            }

            printf("\n");

          }

     }

void triangle(int side,char fillCharacter){

    int y = 0;
    int x = 0;

     for(y = 0; y < side; y++ ){

        for(x = 0; x < side; x++){

                printf("%c",fillCharacter);
          }

          printf("\n");
     }

     printf("\n\n");

}


