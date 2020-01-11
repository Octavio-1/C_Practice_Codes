#include <stdio.h>
#include <stdlib.h>

int main()
{
    float retail1 = 0.0;
    float retail2 = 0.0;
    float retail3 = 0.0;
    float retail4 = 0.0;
    float retail5 = 0.0;
    float final_sales = 0.0;
    int tag;
    int items_sold;

    while(tag != 0){

      printf("Enter item tag seperated by space and enter number sold(enter 0 0 to end)");
      scanf("%d%d",&tag,&items_sold);

      switch(tag){

    case 1:

            retail1 += 2.98 * items_sold;
            break;
        case 2:

            retail2 += 4.50 * items_sold;
            break;

        case 3:

            retail3 += 9.98 * items_sold;
            break;

        case 4:

            retail4 += 4.49 * items_sold;
            break;

        case 5:

            retail5 += 6.87 * items_sold;
            break;

        default:

            break;
            }

    }

    final_sales = retail1 + retail2 + retail3 + retail4 + retail5;

    printf("The final sales is %f",final_sales);



    return 0;
}
