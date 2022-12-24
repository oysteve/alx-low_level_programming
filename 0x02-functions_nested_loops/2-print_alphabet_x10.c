#include "main.h"

/**
 * main-printing alphaber 10times
 *
 */

void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(alphabet[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}		
