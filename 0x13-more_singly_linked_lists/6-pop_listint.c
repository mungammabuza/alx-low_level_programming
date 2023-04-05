#include "lists.h"

/**
 * pop_listint - deletes head off list
 * @head: start of list
 *
 * Return: data from deleted node or 0 of it was empty
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int j;

	if (!head || !*head)
		return (0);

	*i = *head;
	j = i->n;

	*head = i->next;
	free (i);

	return (j);
}
