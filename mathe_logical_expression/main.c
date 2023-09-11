#include <stdio.h>
#include <stdlib.h>

int main()
{

    int p,q,r,s;
    printf(" Enter the value of p q r s:");
    scanf("%d %d %d %d",&p,&q,&r,&s);

    if ( (p>25)&&(p%2 == 0))
    {
        printf("Entered p value is even  \n ");

    }

    if ((((q>r) && (s>p))) &&((r+s)>(p+q)))
    {
        printf("correct value");

    }

    else
    {
      printf("worng values");
    }

}

