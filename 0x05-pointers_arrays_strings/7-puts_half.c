#include "main.h"
/**
 * puts_half - prints half of a string follow by a new line
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int length = 0, start_index;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	   start_index = (length - 1) / 2;

			str -= start_index;

			while (*str != '\0')
			{
				_putchar(*str);
				str++;
			}
			_putchar('\n');
}
