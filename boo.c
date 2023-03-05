#include <stdio.h>
#include <stdbool.h>
/**
 *
 *
 *
 */
int main()
{
	bool calebfat;
	int mess= 1 || 0;

	printf("caleb fat(enter true/false):\n");
	scanf("%d", &mess);
	calebfat = mess;
	if(calebfat == 1)
	{
		printf(" caleb is a dirty boy\n :");
	}
	else
		printf("caleb is a neat boy");

		return(0);
}
