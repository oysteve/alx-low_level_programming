#include "main.h"

/**
 * Main- Printing _putcha.
 *
 * Description: Doing functions in c.
 *
 * Return: Always 0 (Success)
 */         

int main(void)
{
	int c = 0;
	char ade[10] = "_putchar\n";	
	
	while (c < 9)
	{
		_putchar(ade[c]);
		c++;
	}
	return (0);
}	
