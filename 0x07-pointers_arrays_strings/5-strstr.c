#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack:: string
 * @needle: substring to be located
 *
 * Return: always 0 (uccess)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = haystack;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}