#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int length,width;

printf("Enter length and width of Rectangle :");

scanf("%d %d",&length,&width);

int perimeter = (2*(length+width));

int area = (length*width);

printf("perimeter of the rectangle %d \n",perimeter);

printf("area of the rectangle %d \n",area);

}
