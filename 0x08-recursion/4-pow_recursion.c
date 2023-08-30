#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function to print power of a base to exp
 * @x:the base number
 * @y:the exponent
 * Return: 0 , result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
