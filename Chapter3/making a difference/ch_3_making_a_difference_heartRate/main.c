#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DOB variable declaration
    int mm,dd,yyyy,age;
    //Current Date variable declaration
    int mmc,ddc,yyyyc;
    //maximum heart rate,target heart rate and age declaration
    int thRate1,maxHrate,thRate;
    //Retrieve DOB and Current date
    printf("Enter your birth date using dd mm yyyy format:");
    scanf("%d %d %d" ,&dd,&mm,&yyyy);
   // printf("your DOB is %d %d %d\n",dd,mm,yyyy);
    printf("Enter current date using dd mm yyyy format:");
    scanf("%d %d %d" ,&ddc,&mmc,&yyyyc);
   // printf("current date is %d %d %d\n",ddc,mmc,yyyyc);
    //calculating age max heart rate and target heart rate usig user data
    if(mmc < mm){

         age = yyyyc - yyyy - 1;
    }

    else if(mmc > mm){

        age = yyyyc - yyyy;

        }

    else if ( mm = mmc){

        if(ddc >= dd)

            age = yyyyc - yyyy;

        else

            age = yyyyc - yyyy - 1;
    }

    maxHrate = 200 - age;
    thRate = 0.5 * maxHrate;
    thRate1 = 0.85 * maxHrate;
    // print results
    printf("your age is %d\n",age);
    printf("Your maximum heart rate is %d\n",maxHrate);
    printf("Your target heart rate ranges from %d to %d\n",thRate,thRate1);

    return 0;
}
