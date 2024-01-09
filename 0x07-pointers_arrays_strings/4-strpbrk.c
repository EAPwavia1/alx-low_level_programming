#include "main.h"

/**
 * _strpbrk - the function searches for a string
 * @s: input 1
 * @accept: input 2
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
