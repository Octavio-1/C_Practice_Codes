#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade; /* one grade */
    float total = 0;
    float score_total = 0;
    float ac = 0;
    float bc = 0;
    float cc = 0;
    float dc = 0;
    float ec = 0;
    float fc = 0;
    int aCount = 0; /* number of As */
    int bCount = 0; /* number of Bs */
    int cCount = 0; /* number of Cs */
    int dCount = 0; /* number of Ds */
    int eCount = 0;
    int fCount = 0; /* number of Fs */
    char z;
    float average = 0.0;

    printf( "Enter the letter grades.\n" );
    printf( "Enter the EOF character to end input.\n" );

    while(grade != '0'){

            scanf("%c",&grade);

          switch(grade){

       case 'A':
       case 'a':
        ++aCount;
        ac += 5;
        total += 5;
        break;

       case 'B':
       case 'b':
        ++bCount;
        bc += 3.749;
        total += 5;
        break;

       case 'C':
       case 'c':
        ++cCount;
        cc += 2.999;
        total += 5;
        break;

       case 'D':
       case 'd':
        ++dCount;
        dc += 2.499;
       total += 5;
        break;

       case 'E':
       case 'e':
        ++eCount;
        ec += 2.249;
       total += 5;
        break;


       case 'F':
       case 'f':
        ++fCount;
        fc += 0;
        total += 5;
        break;

       case '\n':
       case '\t':
       case ' ':
        break;

       default:
            printf("Incorrect grade entered \n");
            printf("Enter a new grade \n");
            break;

          }
    }


     printf( "\nTotals for each letter grade are:\n" );
     printf( "A: %d\n", aCount ); /* display number of A grades */
     printf( "B: %d\n", bCount ); /* display number of B grades */
     printf( "C: %d\n", cCount ); /* display number of C grades */
     printf( "D: %d\n", dCount ); /* display number of D grades */
     printf( "E: %d\n", dCount ); /* display number of E grades */
     printf( "F: %d\n", fCount ); /* display number of F grades */

    score_total = ac + bc + cc + dc + ec + fc;
     average = (float)(score_total/total) * 100;
     printf("%f\n",average);
     if(average < 40.0 ){
        printf("The average grade is F\n");
     }
     else if(average >= 40.0 && average < 45.0){
        printf("The average grade is E\n");
     }
     else if(average >= 45.0 && average < 50.0){
        printf("The average grade is D\n");
     }
     else if(average >= 50.0 && average < 60.0){
        printf("The average grade is C\n");
     }
      else if(average >= 60.0 && average < 75.0){
        printf("The average grade is B\n");
      }
        else{
            printf("The avetage grade is A\n");
        }

    return 0;
}
