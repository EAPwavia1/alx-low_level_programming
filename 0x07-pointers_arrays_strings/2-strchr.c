#include "main.h"
/**
 * _strchr - the function locates character in a string
 * @s: input 1
 * @c: input 1
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
