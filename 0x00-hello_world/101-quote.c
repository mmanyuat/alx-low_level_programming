#include <stdio.h>
#include <unistd.h>

/**
 * main - A c program that prints a line to the standard error
 * Return: 1(success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof(msg)- 1);
	return (1);
}
