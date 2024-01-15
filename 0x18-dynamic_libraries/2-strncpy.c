#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: the final destination
 * @src:the intial value
 * @n:value
 * Return:the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
	dest[b] = src[b];
	b++;
	}
	while (b < n)
	{
	dest[b] = '\0';
	b++;
	}
	return (dest);
}
