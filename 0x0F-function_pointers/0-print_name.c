#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_name - A function that print name
 *
 * @name: input
 * @f: pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
