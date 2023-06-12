#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * then initialises it with specific char
 * @c: char
 * @size: array size
 *
 * Returns: NULL if size = 0
 * Return: ptr to array, NULL upon failure
 */
char *create_array(unsigned int size, char c)
{
	char *strar;
	unsigned int i;

	strar = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return NULL;
	}
	if (strar == NULL)
	{
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		strar[i] = c;
	}
	return (strar);
}
