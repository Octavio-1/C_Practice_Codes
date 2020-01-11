#include <stdio.h>
#include <stdlib.h>

int main()
{

//Declaration and initialization of arrays to hold numbers of each system
  int o[10] = {0};
  int h[10] = {0};
  int b[10] = {0};

//initialization of variables
  int temp = 0;
  int i = 0;
  int j = 0;
  int count = 1;
  int octal = 0;
  int hex = 0;



  while(count <= 256){

      printf("%d\n",count);

        while(count != 0){

                    temp =  count;
                    octal = count;
                    hex = count;

                    for(i = 0; i <= 9 ; i++){

                        b[i] = count % 2;
                        o[i] = octal % 8;
                        h[i] = hex % 16;

                        count = count/2;
                        octal = octal/8;
                        hex = hex/16;
                    }
// printing individual digits of the number systems
                     for(i = 9; i >= 0; i--){

                        printf("%d",b[i]);

                     }

                     printf("\n");

                     for(i = 9; i >= 0; i--){

                      printf("%d",o[i]);

                     }
                     printf("\n");

                     for(i = 9; i >= 0; i--){
//printing characters for the hexadecimal system(i.e numbers greater than 10 i represented with letters of the alphabet)
                            if(h[i] >= 10){

                                switch(h[i]){

                                case 10:
                                    printf("A");
                                    break;

                                case 11:
                                    printf("B");
                                    break;

                                 case 12:
                                    printf("C");
                                    break;

                                case 13:
                                    printf("D");
                                    break;

                                case 14:
                                    printf("E");
                                    break;

                                case 15:
                                    printf("F");
                                    break;

                                default:
                                    break;
                                }
                            }

                            else{

                                 printf("%d",h[i]);
                            }
                     }

                }

                      printf("\n");
                      count = temp;
                      count++;
                }

  return 0;
}
