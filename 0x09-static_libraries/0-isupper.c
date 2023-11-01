#include "main.h"

/**
 * _isupper - function to check for uppercase letters
 * @c:thealphabetical leter to be tested
 * Return:1 for uppercase and 0 othrwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
