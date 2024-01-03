#include "main.h"
/**
 * rev_string - the function reverse a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int length = 0, i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s -= length;
	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
