#include <stdio.h>
#include <stdlib.h>


int main()
{
  int Y,M,D;

printf("enter the number of days = ");

scanf("%d",&D);

 Y = D /365;

 D = D-(365*Y);
 M = D/60;
 D = D - (M*30);

printf(" Y:M:D %d:%d:%d ",Y,M,D);

}


