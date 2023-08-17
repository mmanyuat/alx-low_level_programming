#include "main.h"

/**
 * _isdigit - a function to print numbers from 0-9
 * @c: the value to be input
 * Return: always 1 if 0-9 digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
