#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: area where memory is copied
 * @src: area where memory is copied from
 * @n: number of bytes copied from src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (i = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
