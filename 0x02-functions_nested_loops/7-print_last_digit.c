#include "main.h"

/*
 * main- Printing the last diigit of a number
 *
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n >= 0)
	{
		lastdigit = n % 10;
	}
	else
	{
		lastdigit = (n % 10) * -1;
	}
	_putchar('0' + lastdigit);
	return (lastdigit);
}
