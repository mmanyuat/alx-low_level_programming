#include "main.h"

/**
 * _islower - function to print lowercase letters
 * @c: the letter
 * Return: 1 for lowercase and zero otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
