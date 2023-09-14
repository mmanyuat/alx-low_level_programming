#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator:string to separate the numbers
 * @n:the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int count;
	unsigned int i;
	va_list list;


	if (separator == NULL)
	{
	return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	count = va_arg(list, unsigned int);
	printf("%d", count);
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(list);
	printf("\n");
}
