#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print strings
 *
 * @separator: delimeter
 * @n: string
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letters;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(letters, n);

	for (i = 0; i < n; 1++)
	{
		str = va_arg(letters, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (1 != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(letters);
}
