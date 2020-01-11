#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    int counter2 = 1;
    int number = 1;
    while(number != -1){
        printf("Enter the number to be printed(enter -1 to end)\n");
        scanf("%d",&number);

        if(number != -1){
            if(number >= 1 && number <= 20){
                    for(counter = 1; counter <= number; counter++){
                            for(counter2 = 1; counter2 <= number; counter2++){
                            printf(" %c", '*');
                    }
                                printf("\n");
                }

            }
            else{
                printf("Wrong Entry, Please enter number between 1 and 20\n\n");
            }
        }
    }
    return 0;
}
