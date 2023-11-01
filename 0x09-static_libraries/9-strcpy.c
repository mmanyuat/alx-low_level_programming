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
	int b = 0;

	while (*(src + a) != '\0')
	{
	a++;
	}
	for (; b < a; b++)
	{
	dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
