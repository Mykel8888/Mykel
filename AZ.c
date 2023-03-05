#include<stdio.h>



int main()
{
	int i;
	char a;

	for(i = 0; i <= 10 ; i++)
	{
		for(a = 'a'; a <='z'; a++)
			/*putchar(a);
			 */
			printf("%c", a);
	}
		/*printf("\n");*/
		putchar('\n');
		return 0;
}
