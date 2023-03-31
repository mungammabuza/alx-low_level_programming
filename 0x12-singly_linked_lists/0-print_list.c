#include "lists.h"
#include <stdio.h>

/**
 * print_list - funtion that prints all elements of a list_t list
 * @h: ptr containing list to print
 * if str = NULL, print [0] (nil)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}	
