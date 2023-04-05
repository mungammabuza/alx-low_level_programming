#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add node to beginning of list
 * @head: ptr to head of list
 * @n: contents of new node
 *
 * Return: element address (success), NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;
	
	return (i);
}
