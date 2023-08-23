#include "main.h"
#include <string.h>

/**
 * _strncat - A function to concantate two strings
 * @dest: the destination string
 * @src:Source string
 * @n:the integers stating times
 * Return: always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
