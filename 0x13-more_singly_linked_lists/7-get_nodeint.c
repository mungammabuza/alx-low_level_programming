#include "lists.h"

/**
 * get_nodeint_at_index - return node of list
 * @head: start of list
 * @index: index of node
 *
 * Return: ptr to node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h;

	if (index == 0 && head)
		return (head);
	for (h = 0; head && h < index; h++)
		head = head->next;
	if (head)
		return (head);
	return (NULL);
}
