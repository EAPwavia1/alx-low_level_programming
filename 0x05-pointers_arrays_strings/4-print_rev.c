#include "main.h"
#include <string.h>
/**
 * print_rev - the function prints in reverse follow by a new line.
 * @s: string to be printed
 * Return:0
 */
void print_rev(char *s)
{
	int longi = 0;
	int m;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (m = longi; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
