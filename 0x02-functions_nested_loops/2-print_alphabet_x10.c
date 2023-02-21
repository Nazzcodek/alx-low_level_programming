#include "main.h"
/**
 * print_alphabet_x10 - the function prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, mul;

	mul = 0;

	while (mul < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		mul++;
		_putchar('\n');
	}
}
