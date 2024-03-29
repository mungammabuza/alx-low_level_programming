#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true
 * else -1
 * @array: array
 * @size: elememts in array
 * @cmp: function pointer of 1 of 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
