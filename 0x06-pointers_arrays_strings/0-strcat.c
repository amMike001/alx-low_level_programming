#include "main.h"
#include <stdio.h>
/**
*main - check the code
*description -Write a function that concatenates two strings
*return:0 success
*/
int main(void)
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i=0;
	while(dest[i] !='\0')
	{
		i++
	}
	j=0;
	while(src[j] !='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i] ='\0';
	return (dest);
}
