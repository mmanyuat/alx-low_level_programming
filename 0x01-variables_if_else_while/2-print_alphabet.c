#include <stdio.h>

/**
 * main - program to print lowercase aplhabets
 * Return: always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
