#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To know if a number is positve, negative or zero.
 *
 * Return: To return (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
