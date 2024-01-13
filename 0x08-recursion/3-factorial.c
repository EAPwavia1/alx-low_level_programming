#include "main.h"

/**
 * factorial - the function returns the factorial of a given number.
 * @in: input
 * Return: 
 */
int factorial(int n)
{
	 if (n < 0)
		 return -1;
	 else return (n == 0)
		 ? 1 : n *factorial(n - 1);
}
