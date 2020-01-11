#include <stdio.h>
#include <stdlib.h>

int timeSconds(int hr, int mn, int ss, int r_hr, int r_mn, int r_ss);

int main()
{
    int hour,minutes,seconds,fhours,fminutes,fseconds;

    printf("please enter initial and final times(within the same 12 hour period) in HR MN SS format:");
    scanf("%d%d%d%d%d%d",&hour,&minutes,&seconds,&fhours,&fminutes,&fseconds);

    printf("Time in seconds is %d:",timeSconds(hour,minutes,seconds,fhours,fminutes,fseconds));

    return 0;
}

int timeSconds(int hr, int mn, int ss, int r_hr, int r_mn, int r_ss){

    int time;

   // if(hr > r_hr){

        time = abs((hr - r_hr)) * 3600 + abs((mn - r_mn)) * 60 + abs(ss - r_ss);
   // }

   // else{

   //     time = (hr + r) * 3600 + abs((mn - fminutes)) * 60 + (abs(ss - fseconds));
   // }

        return time;
}
