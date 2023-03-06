#include "main.h"

/**
 * _strchr - locates a chatacter in a string
 * @c: character to be located
 * @s: string being searched
 *
 * Return (s) on success
 * or return 0 on failure
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

