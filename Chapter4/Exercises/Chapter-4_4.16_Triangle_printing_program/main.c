#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    int counter2;

    for(counter = 1; counter <= 10; counter++){

            printf("\n");

            for(counter2 = 1; counter2 <= 10; counter2++){

                 if(counter2 > counter){

                    printf(" ");
                 }

                 else{

                 printf("%c",'*');

                 }
            }
        }

        printf("\n\n");

    for(counter = 0; counter < 10; counter++){

            printf("\n");

                for(counter2 = 1; counter2 <= 10 - counter; counter2++){

                         printf("%c",'*');
                }
            }

        printf("\n\n");

     for(counter = 1; counter <= 10; counter++){

            printf("\n");

            for(counter2 = 1; counter2 <= 10; counter2++){

                 if(counter2 < counter){

                    printf(" ");
                 }

                 else{

                 printf("%c",'*');

                 }
            }
        }

      printf("\n\n");

       for(counter = 1; counter < 10; counter++){

            printf("\n");

                for(counter2 = 0; counter2 < 10; counter2++){

                        if(counter2 >= 10 - counter){

                        printf("%c",'*');

                    }
                    else
                        printf(" ");

                }
            }


    return 0;
}
