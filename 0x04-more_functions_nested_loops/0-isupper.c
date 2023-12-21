#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppoercase character
 * @c: Parameter to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{

	c = 'A';
		printf("%c: %d\n", c, _isupper(c));
	c = 'a';
		printf("%c: %d\n", c, _isupper(c));
	return (0);
}
