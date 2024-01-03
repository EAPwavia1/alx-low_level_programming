#include "main.h"
/**
 * _puts - the function prints out a string follow by a new line stdout
 * @str: string to print out
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
