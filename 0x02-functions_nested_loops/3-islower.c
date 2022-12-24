#include "main.h"

/**
 * main- Function that checks for lower case
 *
 * Description: _islower(int c) is a function that checks for lowercase
 *
 * Return: 1 if c is lowercase
 *         0 if c is anyother
 *
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


