#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recurion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: tring to reverse
 *
 * Return: 1 if yes
 * Return: 0 if no
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks character recurively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 is yes
 * Return: 0 if no
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
