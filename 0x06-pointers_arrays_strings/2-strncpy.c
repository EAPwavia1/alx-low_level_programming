#include  "main.h"
/**
 * _strncpy - the function copies a string
 * @dest: parameter 1
 * @src: parameter 1
 * @n: number bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
