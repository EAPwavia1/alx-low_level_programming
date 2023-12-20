#include <stdio.h>

/**
 * print_alphabet - prints alphabets in lowercase follow by a new line
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
}
