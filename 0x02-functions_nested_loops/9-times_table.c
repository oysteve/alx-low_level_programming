#include "main.h"

/**
 * main - 9times table.
 *
 */

void times_table(void)
{
	int a;
	int b;
	int product;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10;  b++)
		{
			product = a * b;
			if (b == 0)
			{
				_putchar('0' + product);
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
	}
	_putchar('\n');
}
i
