#include <main.h>

/**
 * main - A program that prints _putchar.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
	{
		int c = 0;
		char holberton[10] = "_putchar\n";
		while (c < 9)
		{
			_putchar(holberton[c]);
			c++;
		}
		return (0);
	}
