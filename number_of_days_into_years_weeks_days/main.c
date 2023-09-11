#include <stdio.h>
#include <stdlib.h>
/** find the year days and weeks for the given days of 1329 **/

int main()
{
int year,weeks,days;
printf("Enter the Number of days:");
scanf("%d",&days);

year = (days/365);
printf("years : %d\n\r",year);

weeks = (days%365)/7; // 1329 mod 365 = 234 /7 = 33.42 //
printf("weeks %d\n",weeks);

days = days -((year*365)+(weeks*7)); //
printf("days %d ",days);

}

