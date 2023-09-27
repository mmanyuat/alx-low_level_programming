#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of the function
 * @a:address of the main function
 * @n: number of bytes
 * Return:nothing
 */

void print_opcodes(char *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
	printf("%.2hhx", a[k]);
	if (k < n - 1)
	printf (" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of it own main function
 * @argc: the argument count
 * @argv:the vector
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int c;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
	printf("Error\n");
	exit(2);
	}
	print_opcodes((char *)&main, c);
	return (0);
}
