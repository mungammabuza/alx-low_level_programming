#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns ptr to new memory space
 * @str: string
 *
 * Return: copy of ptr to new string or  NULL
 */
char *_strdup(char *str)
{
	char *dupli;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dupli = malloc(sizeof(char) * (i + 1));

	if (dupli == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dupli[j] = str[j];

	return (dupli);
}
