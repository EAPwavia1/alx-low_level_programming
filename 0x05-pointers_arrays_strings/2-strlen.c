#include "main.h"
/**
 *  _strlen - the function returns the lenght of a string
 *  @s:string to be returned
 *  Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

