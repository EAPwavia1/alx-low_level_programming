#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -the fuction sums all the numbers
 * @n: input
 * @...: A variable number of parameters to calculate the use of
 * Return: 0 or sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
