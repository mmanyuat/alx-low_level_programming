#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: the first string and the destination
 * @src: the string to be appended
 * Return:pointers to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
