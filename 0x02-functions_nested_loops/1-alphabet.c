#include <stdio.h>
#include <main.h>
/**
 * main - Printing alphate Entry point
 *
 * Return: 0 is Success
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
