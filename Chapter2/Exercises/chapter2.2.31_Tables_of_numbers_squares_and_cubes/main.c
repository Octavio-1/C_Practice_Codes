#include <stdio.h>
#include <stdlib.h>

int main()
{
    //method 1
    printf("Number  Square  Cube\n");
    printf("%d      %d       %d  \n",0,0*0,0*0*0);
    printf("%d      %d       %d  \n",1,1*1,1*1*1);
    printf("%d      %d       %d  \n",2,2*2,2*2*2);
    printf("%d      %d       %d  \n",3,3*3,3*3*3);
    printf("%d      %d      %d  \n",4,4*4,4*4*4);
    printf("%d      %d      %d  \n",5,5*5,5*5*5);
    printf("%d      %d      %d  \n",6,6*6,6*6*6);
    printf("%d      %d      %d  \n",7,7*7,7*7*7);
    printf("%d      %d      %d  \n",8,8*8,8*8*8);
    printf("%d      %d      %d  \n",9,9*9,9*9*9);
    printf("%d     %d     %d    ",10,10*10,10*10*10);


    printf("\n\n\n\n");

    //method 2
    //devlaration and initialization of variables
    int zero = 0, one = 1, two = 2, three = 3, four = 4, five = 5, six = 6, seven = 7, eight = 8, nine = 9, ten = 10;
    int zeroSquare, oneSquare, twoSquare, threeSquare, fourSquare, fiveSquare, sixSquare, sevenSquare, eightSquare, nineSquare, tenSquare;
    int zeroCube, oneCube, twoCube, threeCube, fourCube, fiveCube, sixCube, sevenCube, eightCube, nineCube, tenCube;

    //calculation of squares
    zeroSquare = zero * zero;
    oneSquare =  one * one;
    twoSquare =  two * two;
    threeSquare = three * three;
    fourSquare = four * four;
    fiveSquare = five * five;
    sixSquare =  six * six;
    sevenSquare = seven * seven;
    eightSquare = eight * eight;
    nineSquare = nine * nine;
    tenSquare = ten * ten;

    //calculation of cubes
    zeroCube = zero * zero * zero;
    oneCube =  one * one * one;
    twoCube =  two * two * two;
    threeCube = three * three * three;
    fourCube = four * four * four;
    fiveCube = five * five * five;
    sixCube =  six * six * six;
    sevenCube = seven * seven * seven;
    eightCube = eight * eight * eight;
    nineCube = nine * nine * nine;
    tenCube = ten * ten * ten;

    //printing of results in a tabular form
    printf("number\tsquare\tcube\n");
    printf("%d\t%d\t%d\n", zero,zeroSquare,zeroCube);
    printf("%d\t%d\t%d\n", one,oneSquare,oneCube);
    printf("%d\t%d\t%d\n", two,twoSquare,twoCube);
    printf("%d\t%d\t%d\n", three,threeSquare,threeCube);
    printf("%d\t%d\t%d\n", four,fourSquare,fourCube);
    printf("%d\t%d\t%d\n", five,fiveSquare,fiveCube);
    printf("%d\t%d\t%d\n", six,sixSquare,sixCube);
    printf("%d\t%d\t%d\n", seven,sevenSquare,sevenCube);
    printf("%d\t%d\t%d\n", eight,eightSquare,eightCube);
    printf("%d\t%d\t%d\n", nine,nineSquare,nineCube);
    printf("%d\t%d\t%d", ten,tenSquare,tenCube);
    return 0;
}
