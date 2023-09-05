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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
	while (i < len1)
	{
	ptr[i] = s1[i];
	i++;
	}
	}
	if (s2)
	{
	while (i < (len1 + len2))
	{
	ptr[i] = s2[j];
	i++;
	j++;
	}
	}
	ptr[i] = '\0';
	return (ptr);
}
