#include "main.h"

/**
 * main- Printing alphabet
 *
 * Description: print alphabet a to z in lower case
 *
 */

int main(void)
{
	char print_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
	return (0);
}
