#include "main.h"

/**
 * _memcpy - function to copy the memory
 * @dest: the final
 * @src: the intial
 * @n: the number of bytes
 * Return: final
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
