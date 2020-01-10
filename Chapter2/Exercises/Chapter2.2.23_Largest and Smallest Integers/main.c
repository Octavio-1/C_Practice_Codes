#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
    int largest, smallest;
    printf("enter the numbers: ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

//testing if first integer is the largest
    if(a >= b){

        if(a >= c){

            if(a >= d){

                if(a >= e){

                    largest = a;
                }
            }
        }
    }

//testing if first integer is the smallest
    if(a <= b){

        if(a <= c){

            if(a <= d){

                if(a <= e){
                    smallest = a;
               }
            }
        }
    }

//testing if second integer is the largest
    if(b >= a){

         if(b >= c){

            if(b >= d){
             ;
                if(b >= e){
                    largest = b;
                }
            }
        }
    }

//testing if second integer is the smallest
    if(b <= a){

        if(b <= c){

            if(b <= d){

                if(b <= e){
                    smallest = b;
               }
            }
        }
    }

//testing if third integer is the largest
    if(c >= a){

        if(c >= b){

            if(c >= d){

                if(c >= e){
                    largest = c;
                }
            }
        }
    }

//testing if third integer is the smallest
    if(c <= a){

        if(c <= b){

            if(c <= d){

                if(c <= e){
                    smallest = c;
               }
            }
        }
    }

//testing if fourth integer is the largest
    if(d >= a){

        if(d >= b){

            if(d >= c){

                if(d >= e){
                    largest = d;
                }
            }
        }
    }

//testing if fourth integer is the smallest
    if(d <= a){

        if(d <= c){

            if(d <= b){

                if(d <= e){

                    smallest = d;
                }
            }
        }
    }

//testing if fifth integer is the largest
    if(e >= a){

        if(e >= c){

            if(e >= d){

                if(e >= b){

                    largest = e;
                }
            }
        }
    }

//testing if fifth integer is the smallest
    if(e <= a){

        if(e <= c){

            if(e <= d){

                if(e <= b){
                    smallest = e;
                }
            }
        }
    }

   printf("%d is the largest integer\n",largest);
   printf("%d is the smallest integer\n",smallest);

    return 0;
}
