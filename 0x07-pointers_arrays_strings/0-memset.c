#include "main.h"

/**
 * _memset - the function fills the memory with a constant byte.
 * @n: number of bytes
 * @s: memory arar
 * @b: constant byt
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
