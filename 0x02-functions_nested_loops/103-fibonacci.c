#include <stdio.h>

/**
 * main - program to print fibonnacci less than 40000
 * Return:always 0
 */

int main(void)
{
	int i = 0;
	long j = i, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
