#include <stdio.h>
#include <stdlib.h>

int main()
{

int Employ_ID;
double salary,working_hours,salaryperhour = 15000;

  printf("Enter Employ_ID:");
  scanf("%d",&Employ_ID);

  printf("Enter working_hours:");
  scanf("%lf",&working_hours);


  salary = (salaryperhour)*working_hours;

  printf("output: \n\rEmploye ID = %d\n\r",Employ_ID);
  printf("Salary = U$ %.2lf ",salary);

}





