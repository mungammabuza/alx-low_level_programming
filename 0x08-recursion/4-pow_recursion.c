#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x^y
 * @x: base value
 * @y: power
 *
 * Return: result of power (if y > 0), -1 (y < 0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x *_pow_recursion(x, y - 1));
}
