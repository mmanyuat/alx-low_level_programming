#include "main.h"

/**
 * _memset - function to fill the memory
 * @s:the destination
 * @b:the character
 * @n:the bytes
 * Return:s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
