#include "main.h"
/**
 * swap_int - the function swaps the value of two integers
 * @a: input 1
 * @b: intput 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
