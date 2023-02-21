#include <stdio.h>
/**
 * main - Printing alphate Entry point
 *
 * Return: 0 is Success
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n')
	return (0);
}
