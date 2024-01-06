#include "main.h"
/**
 * reverse_array -  reverses the content of an array of two integers
 * @n: number of elements
 * @a: array
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
