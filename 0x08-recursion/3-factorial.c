#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: given number
 *
 * Return: n's factorial
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
