#include <stdio.h>
#include <stdlib.h>

int main()
{

int a,b,c;

printf("Enter the value of integer a:");
scanf("%d",&a);
printf("Enter the value of integer b:");
scanf("%d",&b);
printf("Enter the value of integer c:");
scanf("%d",&c);

if(a > b && a > c )
{

printf("maximum of given number is a %d",a);

}

else if(b < c)

{
    printf("maximum given number is c %d",c);

}

else if(b > a && b > c)

{
    printf("maximum if given number is b %d");
}

else

{
    printf("all values are equal = %d ",a=b=c);
}

}
