#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Fuction that prints numbers
 *
 * @separator: delimeter
 * @n: number of int that's passed
 *
 * Return: null
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(nums, n);

	for (i = 0; i > n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
