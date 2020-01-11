#include <stdio.h>
#include <stdlib.h>

int main()
{
 int  Q, ans1, ans2, ans3, ans4, ans5, QuesNum;




        while(ans1 != -1){
         printf("................................\n");
         printf(". GLOBAL WARMING QUESTIONS APP .\n");
         printf("................................\n");
        int  CorrectAns = 0;
        printf("Is the universe expanding due to global warming?\n1.yes, it is expanding\n2.no, it is not expanding\n");
        printf("3.it has never expanded\n4.no, it is actually shrinking\n");
        scanf("%d",&ans1);
        if(ans1 == 1){
            ++CorrectAns;
        }
        if(ans1 == -1){
            continue;
        }

        printf("\nIs global warming harmful to life on earth?\n1.It is harmful to plants but not animals\n2.It is harmful to animals but not plants\n");
        printf("3.It to beneficial to both plants and animals\n4.It is harmful to both plant and animals\n");
        scanf("%d",&ans2);

        if(ans2 == 4){
            ++CorrectAns;
        }

        printf("\nWhich of the following is not an indication of global warming?\n1.rising sea level\n2.melting glaciers\n3.reduced temperatures\n");
        printf("4.increased temperatures\n");
        scanf("%d",&ans3);

        if(ans3 == 3){
            ++CorrectAns;
        }

        printf("\nWhat do you think is the main reason behind the clamour to combat climate change?\n1.political\n2.economical\n3.science based\n4.mythical\n");
        scanf("%d",&ans4);

        if(ans4 == 3){
            ++CorrectAns;
        }

       printf("\nWhat Is the relationship between CO2 and Global warming?\n1.CO2 initiated Global warming\n2.CO2 accelerates global warming\n");
	   printf("3.Co2 lags temperature\n4.a and b.\n");
       scanf("%d",&ans5);

       if(ans5 == 4){
            ++CorrectAns;
       }

       printf("%d",CorrectAns);
       if(CorrectAns == 5){
       printf("\n\n***Excellent***\n\n");
       }

       else if(CorrectAns == 4){
       printf("\n\n***Very Good***\n\n");
       }
       else{
       printf("\n\n***Time to brush up on your knowledge of global warming***");
       printf("\n----------------------------------------------------------------\n");
       printf("check www.skepticalscience.com for more info on global warming\n----------------------------------------------------------------\n\n");
           }

       printf("\nEnter '-1' to end or enter any other number to continue:\n\n");
       scanf("%d",&ans1);
        }
       return 0;
}
