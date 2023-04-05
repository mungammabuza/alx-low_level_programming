#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: ptr to list that will be set to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *i;
	
	if (!head)
		return;

	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
}
