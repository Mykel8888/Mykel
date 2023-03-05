#include <stdio.h>

int main()
{
	char i;

	printf("enter your full name\n");
	fget(i, sizeof(i),stdin);
	printf("your name is;%c\n", i);
}
