#include "main.h"
/**
 * _isdigit- checks of digits from 0 - 8
 * @c: parameter to be checked
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= 9)
		return (1);
	else
		return (0);
}
