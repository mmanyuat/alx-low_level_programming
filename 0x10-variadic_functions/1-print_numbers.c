#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers passed
 * @separator: the operator after number
 * @n:the number of parameters
 * Return:nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	num = va_arg(list, int);
	printf("%d", num);
	if (i < n - 1)
	{
	if (separator != NULL)
	{
	printf("%s ", (separator));
	}
	}
	}
	printf("\n");
	va_end(list);
}
