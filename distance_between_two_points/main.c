#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("distance bitween two points\n\r");

int x1,x2,y1,y2;


printf("enter value of point x1:");
scanf("%d",&x1);

printf("enter value of point x2:");
scanf("%d",&x2);

printf("enter value of point y1:");
scanf("%d",&y1);

printf("enter value of point y2:");
scanf("%d",&y2);

int x = pow((x2-x1),2);
int y = pow((y2-y1),2);

float distance =sqrt(x+y);

printf("distnace bitween two points = %.4f",distance);

    return 0;
}
