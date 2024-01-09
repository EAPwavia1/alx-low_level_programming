#include "main.h"

/**
 *_memcpy - The functon copie to memory area
 * @dest:  where stores in mem
 * @src: memory to copoy from
 * @n: number of bytes
 *
 * Return: copy memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
