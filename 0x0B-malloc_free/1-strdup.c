#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to new string
 * @str: the string
 * Return:NUll or the pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	if (str == NULL)
	return (NULL);
	len = strlen(str);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < len; i++)
	{
	ptr[i] = str[i];
	}
	return (ptr);
}
