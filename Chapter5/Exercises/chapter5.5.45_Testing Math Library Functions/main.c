#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("FUNCTION\t\tDESCRIPTION\t\t\tEXAMPLE\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("sqrt( x )\t\tsquare root of x \t\tsqrt( 900.0 ) is %lf \n\t\t\t\t\t\t\tsqrt( 9.0 ) is %lf\n\n",sqrt( 900.0 ),sqrt(9.0));
    printf("exp( x )\t\texponential function e \t\texp( 1.0 ) is %lf \n\t\t\t\t\t\t\texp( 2.0 ) is %lf\n\n",exp( 1.0 ),exp(2.0));
    printf("log( x )\t\tnatural logarithm of x (base e)\tlog( 2.718282 ) is %lf \n\t\t\t\t\t\t\tlog( 7.389056 ) is %lf\n\n",log( 2.718282 ),log( 7.389056 ));
    printf("log10( x )\t\tlogarithm of x (base 10)\tlog10( 1.0 ) is %lf \n\t\t\t\t\t\t\tlog10( 10.0 ) is %lf\n\n",log10( 1.0 ),log10( 10.0 ));
    printf("fabs( x )\t\tabsolute value of x\t\tfabs(-13.5 ) is %lf \n\t\t\t\t\t\t\tfabs( 0.0 ) is %lf\n\n",fabs(-13.5 ),fabs( 0.0 ));
    printf("ceil( x )\t\trounds x to the smallest\tceil( 9.2 ) is %lf \n\t\t\tinteger not less than x\t\tceil( -9.8 ) is %lf \n\n",ceil( 9.2 ),ceil( -9.8 ));
    printf("floor( x )\t\trounds x to the largest\t\tfloor( 9.2 ) is %lf \n\t\t\tinteger not greater than x\tfloor( -9.8 ) is %lf \n\n",floor( 9.2 ),floor( -9.8 ));
    printf("pow( x, y )\t\tx raised to power y (x y)\tpow( 2, 7 ) is %lf \n\t\t\t\t\t\t\tpow( 9, .5 ) is %lf\n\n",pow( 2, 7 ),pow( 9, .5 ));
    printf("fmod( x, y )\t\tremainder of x/y as a\t\tfmod( 13.657, 2.333 ) is %lf \n\t\t\tfloating-point number\n\n",fmod(13.657, 2.333));
    printf("sin( x )\t\ttrigonometric sine of x\t\tsin( 0.0 ) is %lf \n\t\t\t(x in radians)\n\n",sin( 0.0 ));
    printf("cos( x )\t\trigonometric cosine of x \tcos( 0.0 ) is %lf \n\t\t\t(x in radians)\n\n",cos( 0.0 ));
    printf("tan( x )\t\trigonometric tangent of x \ttan( 0.0 ) is %lf \n\t\t\t(x in radians)\n\n",tan( 0.0 ));


    return 0;
}
