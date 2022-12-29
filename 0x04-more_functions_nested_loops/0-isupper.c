#include "main.h"

/**
 * main - Checking for uppercase
 *
 * @c: print int
 *
 * Return 1 if true
 * Return 0 if else
 *
 */

int _isupper(int c)
{
	c = {A - Z};
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
