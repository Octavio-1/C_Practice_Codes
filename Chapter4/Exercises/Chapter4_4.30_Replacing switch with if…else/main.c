#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade; /* one grade */
    int aCount = 0; /* number of As */
    int bCount = 0; /* number of Bs */
    int cCount = 0; /* number of Cs */
    int dCount = 0; /* number of Ds */
    int eCount = 0; /* number of Es */
    int fCount = 0; /* number of Fs */

    printf( "Enter the letter grades.\n" );
    printf( "Enter the EOF character to end input.\n" );


    while ( (grade = getchar()) != 't' ) {

        /*
        if(grade == 'a' || grade == 'A') {

             ++aCount;
        }

        else if(grade == 'b' || grade == 'B'){

            ++bCount;
        }

        else if(grade == 'c' || grade == 'C'){

            ++cCount;
        }

        else if(grade == 'd' || grade == 'D'){

            ++dCount;
        }

        else if(grade == 'e' || grade == 'E'){

            ++eCount;
        }

        else if(grade == 'f' || grade == 'F'){

            ++fCount;
        }

        else if(grade == '\t' || grade == '\n' || grade == ' '){

        }

        else{

            printf("Incorrect letter grade entered");
            printf("Enter a new grade.\n");
        }

    }
*/

if(grade == 'a' || grade == 'A') {

             ++aCount;
        }

        if(grade == 'b' || grade == 'B'){

            ++bCount;
        }

        if(grade == 'c' || grade == 'C'){

            ++cCount;
        }

        if(grade == 'd' || grade == 'D'){

            ++dCount;
        }

        if(grade == 'e' || grade == 'E'){

            ++eCount;
        }

        if(grade == 'f' || grade == 'F'){

            ++fCount;
        }

        if(grade == '\t' || grade == '\n' || grade == ' '){

        }

        if(grade != '\t' || grade != '\n' || grade != ' ' || grade != 'f' || grade != 'F' || grade != 'e' || grade != 'E' || grade != 'd' || grade != 'D'  ){

            printf("Incorrect letter grade entered");
            printf("Enter a new grade.\n");
        }

    }

printf( "\nTotals for each letter grade are:\n" );
printf( "A: %d\n", aCount ); /* display number of A grades */
printf( "B: %d\n", bCount ); /* display number of B grades */
printf( "C: %d\n", cCount ); /* display number of C grades */
printf( "D: %d\n", dCount ); /* display number of D grades */
printf( "E: %d\n", dCount ); /* display number of E grades */
printf( "F: %d\n", fCount ); /* display number of F grades */
return 0; /* indicate program ended successfully */

}

