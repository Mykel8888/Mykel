#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n, *p, i=0;
       int sum =0;
	
	printf("enter the number of value you need \n" );
	scanf("%d", &n);
	printf("the value you enter is %d\n:", n);

	p =(int*)malloc(sizeof(int)*n);


	while(i < n)
	{
	printf("enter the %d value; ", n);
	scanf ("%d", (p+i));
		i++;
		sum=sum + (p[i]);
	}

	for(i =0; i < n+1; i++)
	{
	printf("the value of the array is ; %d\n", *(p+i));
	printf("sum %d", sum);
	}

	 free(p);


}
