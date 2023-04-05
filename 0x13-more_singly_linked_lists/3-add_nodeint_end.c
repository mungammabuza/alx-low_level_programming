#include "lists.h"

/**
 * add_nodeint_end - adds nodes at end of list
 * @head: ptr to list
 * @n: new node j
 *
 * Return: new node element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));
	listint_t *j = *head;

	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (j->next)
		j = j->next;

	j->next = i;
	return (i);
}
