#include "main.h"

/**
 * print_numbers - printing numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_printchar (i + '0');
		i++;
	}
		_printchar ('\n');
}
