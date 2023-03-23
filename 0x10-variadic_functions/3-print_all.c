#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints all
 *
 * @format: format for strings
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list form;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(form, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(form, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(form, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(form, double), sep);
			break;
		case 's':
			str = va_arg(form, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(form);
}
