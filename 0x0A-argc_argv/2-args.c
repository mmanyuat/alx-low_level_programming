#include <stdio.h>

/**
 * main - function to print all its arguemnts
 * @argc:the argument counter
 * @argv:the arguemnt vector
 * Return:Nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
