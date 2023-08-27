#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 * @n: the number
 * Return:the last digit
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
	lastd = lastd * -1;
	_putchar(lastd + '0');
	}
	return (lastd);
}
