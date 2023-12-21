#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - A c program that prints a line to the standard error
 * Return: 1(success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len;

	len = strlen(msg);
	write(2, msg, len);
	return (1);
}
