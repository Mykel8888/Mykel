#include <stdio.h>



int main()
{
	double a;
	int age;

	printf("list of acceppted age:\n");
	printf("enter your age that less than 100:\n");
	scanf("%lf", &a);
	age= a;
	printf("your age is ; %f\n",a);
	
	if(age >= 18)
	{
	printf("you are adult\n");
	}
	if (age < 18)
	{
	printf("you are teanager\n");
}
	if(age >= 65)
	{
	printf("you can vote\n");
	}
	else
	{
		printf("you can not vote");
	}
	if (age < 65)
	{
	printf(" wrong input");
	}

}
