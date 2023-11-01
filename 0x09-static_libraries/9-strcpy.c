#include "main.h"

/**
 * _strncpy - copy str
 * @dest: the destination 
 * @src: the source
 * @n:the integer
 * Return: the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	 n = 0;

	while (*(src + a) != '\0')
	{
	a++;
	}
	for (; n < a; n++)
	{
	dest[n] = src[n];
	}
	dest[a] = '\0';
	return (dest);
}
