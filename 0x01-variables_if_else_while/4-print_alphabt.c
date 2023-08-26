#include <stdio.h>

/**
 * main - program to print alphabets except e and q
 * Return:always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch++;
	}
	putchar('\n');
	return (0);
}

