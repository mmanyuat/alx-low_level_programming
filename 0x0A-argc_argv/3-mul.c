#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 * @argc: the counter
 * @argv:the vector
 * Return:the product or 1 for error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d", result);
	printf("\n");
	return (0);


}
