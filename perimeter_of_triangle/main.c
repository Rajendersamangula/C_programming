#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c;

    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    printf("enter the value of c = ");
    scanf("%d",&c);

    float  perimeter = a+b+c;

    printf("perimeter of triangle with given values =  %.1f",perimeter);

    return 0;

}
