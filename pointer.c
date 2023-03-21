#include <stdio.h>
/**pointer class
 * pointer to pointer
 * */
int main()
{
	int a = 10;
	int *y;
	y= &a;
	int **j= &y;
	int ***i = &j;
	***i =20;


	printf("a=%d\n", a);
	printf("a=%p\n", &a);
	printf("a=%d\n", *y);//pointer to 'a'value base.
	printf("a=%p\n", y);//pointer to 'a' adress
	printf("y=%p\n", &y);//pointer to it own adress
	printf("a=%d\n", *(*j));//pointer to to pointer(print the value base of 'a')
	printf("y=%p\n", j);//pointer to the adress of y
	printf("y=%p\n", &j);//pointer to its own adress
	printf("a=%d\n", ***i);//pointer to pointer(print the value base of "a")
	printf("j=%p\n", i);//pointer to adtress of j
	printf("i=%p\n", &i);//pointer to it own adress
	printf("y=%p,%p\n", i,&i);//pointer to 'a' adress

}
