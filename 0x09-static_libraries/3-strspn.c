#include "main.h"

/**
 * _strspn - program to compare
 * @s:the input
 * @accept:the second input
 * Return:Nothing
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	{
	a++;
	break;
	}
	else if (accept[a + 1] == '\0')
	return (n);
	}
	a++;
	}
	return (n);
}
