#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;

  printf("even numbers available bitween are 0 to 50\t\r\n ");

  for(i=1;i<=10;i++)
  {
      if(i%2 == 0)
      {
          printf("%d ",i);

      }
  }

    return 0;
}
