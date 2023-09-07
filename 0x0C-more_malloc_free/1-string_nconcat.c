#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concat strings
 * @s1:the destination
 * @s2:the source
 * @n:the number of bytes
 * Return: the pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0' && len2 < n)
	len2++;
	result = (char *) malloc(len1 + len2 + 1);
	if (result == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	{
	result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
	result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';
	return (result);
}

