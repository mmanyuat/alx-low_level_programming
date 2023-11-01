#include "main.h"

/**
 * _memset - function to fill up memory`s block
 * @s:the parameter to the character
 * @b:the parameter to the value to fill the block
 * @n:the number of bytes required
 * Return:the parameter to the character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n--;
	}
	return (s);
}
