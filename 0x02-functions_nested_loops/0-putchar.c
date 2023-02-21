#include <"stdio.h">
#include <"main.h">

/**
 * main - Printing _putchar
 *
 * Return:  0 is Success
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (0);
}
