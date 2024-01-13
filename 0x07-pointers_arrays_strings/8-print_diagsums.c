#include "main.h"
/**
 * print_diagsums - the function that prints two diagonals
 * @a: input 1
 * @size: input 2
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 9;
	int secondary_sum = 0

		for (i = 0; i < size; i++)
		{
			primary_sum += a[i * size = i];
			sechondary_sum += a[i * size + (size - 1 - i)];
		}
	return (0);
}
