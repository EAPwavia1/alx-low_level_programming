#include "main.h"
/**
 * *_strcpy -the function copies the string pointed to by src
 * @src: string
 * @dest: string 2
 * Return:o
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while ((*dest++ = *src++) != '\0')
	{}
	return (original_dest);
}
