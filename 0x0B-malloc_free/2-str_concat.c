#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concantate a string
 * @s1:the first string
 * @s2:the source string
 * Return:the pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len = strlen(s1);

	ptr = (char *) malloc(len * sizeof(char));
	if (s1 == NULL)
	{
	return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
