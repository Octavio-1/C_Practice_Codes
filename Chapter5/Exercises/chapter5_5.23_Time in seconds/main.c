#include <stdio.h>
#include <stdlib.h>

int timeSconds(int hr, int mn, int ss);

int main()
{
    int hour,minutes,seconds;

    printf("please enter time in HR MN SS format:");
    scanf("%d%d%d",&hour,&minutes,&seconds);

    printf("Time in seconds is %d:",timeSconds(hour,minutes,seconds));

    return 0;
}

int timeSconds(int hr, int mn, int ss){

    int r_hours = 12; int r_minutes = 00; int r_seconds = 00;
    int time;

    if(hr >= r_hours){

        time = abs((hr - r_hours)) * 3600 + abs((mn - r_minutes)) * 60 + abs(ss - r_seconds);
    }

    else{

        time = (hr + r_hours) * 3600 + abs((mn - r_minutes)) * 60 + (abs(ss - r_seconds));
    }

        return time;




}
