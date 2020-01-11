#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hypothenuse(double opp, double adj);
int main()
{
    double opposite, adjacent, hypothe;
    printf("Enter the opposite and the adjacent\n");
    scanf("%lf\n",&opposite);
    scanf("%lf",&adjacent);
    hypothe = hypothenuse(opposite,adjacent);
    printf("%\nThe hypothenuse is:%lf",hypothe);

    return 0;
}
double hypothenuse(double opp, double adj){

    return sqrt(opp * opp + adj * adj);


}
