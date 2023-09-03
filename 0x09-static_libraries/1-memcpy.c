#include "main.h"

/**
 * _memcpy - program to copy memory
 * @dest:the destination
 * @src:the source
 * @n:number of bytes
 * Return: copied memory with n bytes changd
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
	dest[p] = src[p];
	n--;
	}
	return (dest);
}
