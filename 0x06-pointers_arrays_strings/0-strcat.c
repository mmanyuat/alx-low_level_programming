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
	strcat(dest, src);
	printf("%s", dest);
	return (dest);
}
