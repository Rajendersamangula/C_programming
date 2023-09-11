#include <stdio.h>
#include <stdlib.h>

int main()
{
  int H,M,S;

printf("enter the number of seconds = ");

scanf("%d",&S);

 H = S / 3600;
 M = (S-(3600*H))/60;
 S = (S-(3600*H)-(M*60));

printf("H:M:S %d:%d:%d ",H,M,S);

}
