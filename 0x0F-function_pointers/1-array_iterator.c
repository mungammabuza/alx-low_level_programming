#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem on \n
 * @array: array
 * @size: how much elem to print
 * @action: ptr to print reg or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
