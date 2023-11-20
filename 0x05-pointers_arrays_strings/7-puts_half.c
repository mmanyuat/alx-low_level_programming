#include "main.h"
#include <string.h>

/**
 * puts_half - function to print half of the string
 * @str:the string
 * Return:nothing
 */

void puts_half(char *str)
{
	int count = 0;
	int n, i, m;

	while (str[count] != '\0')
	{
	count++;
	}
	n = (count - 1) / 2;
	m = count / 2;
	if (n % 2 != 0)
	{
	for (i = n; i < count; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
	}
	else
	{
	for (i = m; i < count; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
	}
}
