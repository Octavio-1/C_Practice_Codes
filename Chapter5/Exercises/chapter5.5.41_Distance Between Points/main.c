#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double points(double,double,double,double);
int main()
{
    double arg1,arg2,arg3,arg4;
    printf("Please enter x1,x2,y1,y2 seperated by a space:");
    scanf("%lf%lf%lf%lf",&arg1,&arg2,&arg3,&arg4);
    printf("The distance between the two point is: %lf units",points(arg1,arg2,arg3,arg4));

    return 0;
}
double points(double x1,double x2,double y1,double y2){

       double point1,point2, ans;
       point1 = fabs(x2 - x1);

       point2 = fabs(y2 - y1);
       ans = sqrt(pow(point1,2) + pow(point2,2));

       return ans;
}
