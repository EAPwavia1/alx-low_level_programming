#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	int m;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (m = 0; m <= t; m++)
	{
		if (m % 2 == 0)
		{
		_putchar(str[0]);
		}
	}
	_putchar('\n');
}
