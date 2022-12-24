#include "main.h"

/**
 * Main- Printing _putchar.
 *
 * Description: Print _putchar with a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;
	char ade[10] = "_putchar\n";

	while (c < 9)
	{
		_putchar(ade[c]);
		c++;
	}
	return (0);
}
