#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to calculate sum
 * @n: the number of arguments
 * @...: the elipsy
 * Return:the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count,  sum = 0;
	va_list args;

	if (n == 0)
	{
	return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	count = va_arg(args, int);
	sum += count;
	}
	va_end(args);
	return (sum);
}
