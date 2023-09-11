#include <stdio.h>
#include <stdlib.h>

    int main()

{

        float numbers[5],sum =0,average = 0;
        int j, pctr=0, nctr=0;

	for (j=0;j<5;j++)

	{
	    printf("enter integer values  =",j+1);
	    scanf("%f",&numbers[j]);
	}

    for(j = 0; j < 5; j++)

    {

		if(numbers[j] > 0)
		{

			pctr++;
			sum += numbers[j];
			average = sum/pctr;

		}
		else if(numbers[j] < 0)
		{
			nctr++;
		}

    }

	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nNumber of negative numbers: %d", nctr);
	printf("\nAverage of positive numbers %f",average);
	printf("\n");

	return 0;


}


