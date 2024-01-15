#include "main.h"

/**
 * _strcpy - copy str
 * @dest:the destination
 * @src: the source
 * Return: the dest
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while ((*dest++ = *src++) != '\0')
	;
	return (s);
}
