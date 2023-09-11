#include <stdio.h>
#include <stdlib.h>





int main()
{

    int price;
    printf("enter price value :");
    scanf("%d",&price);

    int total = (int)price /100;
    printf("Notes_100 are = %d\n",total);

    price = price -(total*100);
    total = price /50;
    printf("Note_50 are = %d\n",total);

    price = price -(total*50);
    total = price /20;
    printf("Note_20 are = %d\n",total);

    price = price -(total*20);
    total = price /10;
    printf("Note_10 are = %d\n",total);

    price = price -(total*10);
    total = price /5;
    printf("Note_5 are = %d\n",total);

    price = price -(total*5);
    total = price /2;
    printf("Note_2 are = %d\n",total);

    price = price -(total*2);
    total = price /1;
    printf("Note_1 are = %d\n",total);

    return 0;
}



