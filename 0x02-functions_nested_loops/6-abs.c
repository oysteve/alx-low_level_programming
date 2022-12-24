#include "main.h"

/**
 * main- Absolute value task
 *
 * Return: Always 0 (Success).
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	if (n == 0)
	{
		n = 0;
	}
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
