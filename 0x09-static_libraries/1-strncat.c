#include "main.h"

/**
 * _strncat - function to concat two strings
 * @dest:the final file
 * @src: the intial file
 * @n: the integer
 * Return: the final file
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
	a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);

}
