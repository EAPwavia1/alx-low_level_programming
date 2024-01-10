#include "main.h"
/**
 * _strstr - the function that locates a string.
 * @needle : input 1
 * @haystack : input 2
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *p = needle;

		while (*I == *p && *p != '\0')
		{
			I++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
