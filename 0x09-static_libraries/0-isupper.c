#include "main.h"

/**
 * _islower - function to examine alphabet
 * @c: the alphabet
 * Return:1 for uppercase and 0 for lowercase
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'z')
	return (1);
	else
	return (0);
}
