#include <stdio.h>
#include <stdlib.h>

int main()
{
int distance;
float fuel_consumed;

printf("enter bike travell distance:");
scanf("%d",&distance);

printf("enter bike fuel consumption:");
scanf("%f",&fuel_consumed);

double average_fuel_Consumption = (distance/fuel_consumed) ;

printf("average consuption(km/ltr) = %.2lf",average_fuel_Consumption);

}
