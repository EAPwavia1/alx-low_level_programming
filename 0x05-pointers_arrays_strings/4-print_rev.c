#include "main.h"
/**
 * print_rev - the function prints in reverse follow by a new line.
 * @s: string to be printed
 * Return:0
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
