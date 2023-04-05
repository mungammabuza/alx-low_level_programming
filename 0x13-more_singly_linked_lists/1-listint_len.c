#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in list
 * @h: ptr to list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
