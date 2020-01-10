#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("!!!!!CARPOOLING APP!!!!!\n");

    //Declaration of variables
    int totMil;  //Total miles driven per day
    int gasCost; //cost per gallon of gasoline
    int aveMil;  //average miles per gallon
    int parkFee; //parking fees per day
    int toll;    //Tolls per day
    int tFare;   //cost of carpooling
    int drvCost; //Total driving cost
    int gasCostPd; //gasoline cost per day
    int amtSaved;  //Amount saved from carpooling

    // input user data
    printf("Enter Total miles driven per day:");
    scanf("%d",&totMil);
    printf("Enter cost of gallon of gasoline:");
    scanf("%d",&gasCost);
    printf("Enter Average miles per gallon:");
    scanf("%d",&aveMil);
    printf("Enter parking fees per day:");
    scanf("%d",&parkFee);
    printf("Enter Tolls per day:");
    scanf("%d",&toll);
    printf("Enter cost of carpooling(Tfare):");
    scanf("%d",&tFare);

    //calculatiing cost of gas per day
    gasCostPd = gasCost * (totMil / aveMil) ;
    // Total driving cost per day
    drvCost = parkFee + tFare;
    //Amount saved from carpooling
    amtSaved = drvCost - tFare;

    printf("\n\n you saved %d Naira from carpooling\n", amtSaved );

    return 0;
}
