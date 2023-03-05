#include <stdio.h>




int main()
{
	int pack=25;
	int roll=15;

	 double rem=pack % roll;
	 rem=2/3.0;
	 int *y = &roll;
	 printf("%p\n", y);
	 printf("%i\n", *y);
	 printf("%g\n", rem);
	 printf("%p\n", &rem);
	 return(0);
}
