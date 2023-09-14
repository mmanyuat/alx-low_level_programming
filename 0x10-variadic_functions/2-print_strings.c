#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - functin to print strings
 * @separator:the comma character that separates the string
 * @n:number of string passed to the function
 * Return:nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sen;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	sen = va_arg(args, char *);
	if (sen  == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", sen);
	}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
