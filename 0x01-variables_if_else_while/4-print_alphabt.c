#include <stdio.h>

/**
 * main - Printing the alphabets without q and e.
 *
 * Return: 0 is Success
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
