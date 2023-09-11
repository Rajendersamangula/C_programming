#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("enter integer value of a and b = ",a,b);
    scanf("%d %d",&a,&b);

    if (a > b)
    {
        int temp;
        temp = a;
        a=b;
        b=temp;
    }

    if(b%a == 0)
    {
        printf(" a and b are multiples");
    }
    else
        {
        printf("a and b are not multiples");
    }

    }
