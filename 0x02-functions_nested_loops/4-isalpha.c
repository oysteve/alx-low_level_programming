#include "main.h"

/**
 * main- checking for alphabet in any case
 *
 * Return: 1 if it is an alpahbet
 * otherwise return 0
 *
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || 
	(c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
