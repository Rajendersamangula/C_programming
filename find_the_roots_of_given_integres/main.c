#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;

   printf("Enter the value of a b c :");
   scanf("%d %d %d",&a,&b,&c);

float x = sqrt((b*b-(4*a*c)));

float Root_1 = ((-b)+(x))/(2*a);
float Root_2 = ((-b)-(x))/(2*a);

 printf("Root_1 %f\n",Root_1);
 printf("Root_2 %f",Root_2);

    return 0;
}
