#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
		{
			str++;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
