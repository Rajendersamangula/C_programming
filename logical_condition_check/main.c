#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("Enter the value of x  from 0 to 80 = ");
   scanf("%d",&x);

    if((x>=0) && (x<=80))
    {
        printf("It is in range [ 0 80]\n");
    }
    else{
        printf("Error\n");
    }

    return 0;
}

