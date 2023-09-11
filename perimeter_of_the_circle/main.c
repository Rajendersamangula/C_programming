#include <stdio.h>
#include <stdlib.h>


int main()
{
int radius;
float const pi = 3.14;

printf("enter the radius of the circle :");
scanf("%d",&radius);

float perimeter = 2*pi*radius;
float area = pi*radius*radius;

printf("Perimeter of the circle id %f\n",perimeter);
printf("Area of the circle %f",area);

}
