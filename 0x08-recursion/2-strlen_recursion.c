#include "main.h"

/**
 * _strlen_recursion - a function returning length of a string
 * @s: the string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int strlng = 0;
	
	if (*s)
	{
		strlng++;
		strlng = strlng + _strlen_recursion(s + 1);
	}
	return (strlng);
}
