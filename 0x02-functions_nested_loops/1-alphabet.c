#include "main.h"

/**
 * main- Printing alphabet
 *
 * Description: print alphabet a to z in lower case
 *
 */

void print_alphabet(void)
{
	char print_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(print_alphabet[i]);
	}
	_putchar('\n');
}
