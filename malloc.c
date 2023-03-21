#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	
	
		int *prt;
		prt =(int*)malloc(4*sizeof(int));
		if(prt='\0')
		{
			printf("exausted memmory");
		}

		prt= 1;
		printf("%d\n",*prt);
	free(prt);

}
