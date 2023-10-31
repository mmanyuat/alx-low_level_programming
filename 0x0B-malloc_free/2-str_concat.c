#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function to concantate two strings
 * @s1:the source string
 * @s2:the destination
 * Return:NULL or pointer to the strings
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
	return (NULL);
	}
	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;
	ptr = malloc(sizeof(char) * len1 + len2 + 1);
	if (ptr == NULL)
	return (NULL);
	if (s1 != NULL)
	strcpy(ptr, s1);
	if (s2 != NULL)
	strcpy(ptr + len1, s2);
	return (ptr);
}
