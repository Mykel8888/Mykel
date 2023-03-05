
// out patient
// search inpatient
// number of patient
// patient day
// wrong entry

#include <stdio.h>


int main()
{
	printf("1 out patience\n");
	printf("2 search inpatient\n");	
	printf("3 number of patience\n");	
	printf("4 patient day\n");	
	/*printf("wrong entry\n");*/	
		printf("enter digit from 1-4 to acces patient available services\n;");
	int out;
	scanf("%i", &out);
	
	if(out == 1)
	{
	
		printf("out patient");
	}
	else if(out == 2)
	{
	
		printf("search inpatient");
	}
	else if(out == 3)
	{

		printf("number of patient");
	}
	else if(out == 4)
	{

		printf("patient day");
	}
	else 
	{
			
		printf("wrong input");
	}
	putchar('\n');
		return 0;
}
