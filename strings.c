#include <stdio.h>




char *string(char *dest, char *src)
{
	int i, j;

	i = 0;
	while(dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while(src[j] !='\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i];
	return(dest);

}
