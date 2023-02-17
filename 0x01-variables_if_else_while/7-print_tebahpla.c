#include <stdio.h>

/**
 * main - resever of the alphabet
 *
 * Return: 0 is success
*/

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxwz";

	int i;

	for (i = 0; i <	26; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
