#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints a string
 * @separator:the value that separates the string
 * @n:the number of parametrs
 * Return:nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	s = va_arg(list,char*);
	if (s == NULL)
	{
	printf("Nil");
	}
	else
	{
	printf("%s", s);
	}
	if (separator != NULL)
	{
	if (i < n - 1)
	{
	printf("%s", separator);
	}
	}
	}
	printf("\n");
	va_end(list);
}
