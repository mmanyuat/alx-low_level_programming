#include <stdio.h>

/**
 * main - a program to identify if number is positve or negative or zero
 * Return:always 0(success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%d is zero", n);
	}
	else if (n >= 0)
	{
	printf("%d is positive", n);
	}
	else
	printf("%d is negative", n);
	return (0);
}


