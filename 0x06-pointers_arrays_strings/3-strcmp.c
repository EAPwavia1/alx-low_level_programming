#include "main.h"
/**
 * _strcmp - the function compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
