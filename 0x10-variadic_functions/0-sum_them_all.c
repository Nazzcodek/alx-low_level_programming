#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that sum all params
 *
 * @n: number of int to be sum
 *
 * Return: sum always
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, unsigned int);
	}
	va_end(num);

	return (sum);
}
