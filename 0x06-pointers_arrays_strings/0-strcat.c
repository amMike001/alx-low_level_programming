#include "main.h"
#include <stdio.h>
/**
*main - check the code
*description -Write a function that concatenates two strings.
*Return: Always 0.
 */
int main(void)
char *_strcat(char *dest, char *src)
{
	int i,j;
	for (i = 0 ;dest[i] ; i++ );
	for (j = 0; src [j] ; i++ );
	{
		dest[i] = src[j];
	}
	dest[i]='\0';
	return(dest);
}
