#include <stdio.h>
#include <stdbool.h>


int main()
{
	int i;
	int a;
	double z;

	printf("enter the two logic number between 0-5; \n");
	printf("enter the first number; \n");
	scanf("%d", &i);
	printf("enter the second number; \n");
	scanf("%d", &a);
		z= a+i;
		printf("the sum of your entry is; %f\n", z);

	if(z <= 5)
	{
		printf("the result is poor\n");
		return (0);
	}
	else if ((z > 5) || ( z == 10))
	{
		printf("the result is good\n");
		return (0);
	}

}
