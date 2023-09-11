#include <stdio.h>
#include <stdlib.h>

int main()
{

double w1,w2,cw1,cw2;

printf("enter the weight of item_1 :");
scanf("%lf",&w1);

printf("enter the weight of item_2 :");
scanf("%lf",&w2);

printf("enter the count of item_1  :");
scanf("%lf",&cw1);

printf("enter the count of item_2  :");
scanf("%lf",&cw2);

double average = ((w1*cw1)+(w2*cw2)) / (cw1+cw2);

printf("Average value  = %.2lf",average);

return 0;

}
