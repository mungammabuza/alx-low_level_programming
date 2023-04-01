#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node to end of list
 * @head: ptr pointing to ptr of list_t
 * @str: ptr to new string to be added and duplicated
 *
 * Return: addres of new element on success, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	size_t len;
	int i;
	list_t *node2;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	for (i = 0, len = 0; str[i] != '\0'; i++)
		len++;

	n->str = strdup(str);
	n->len = len;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	node2 = *head;

	for (i = 0; node2->next != NULL; i++, node2 = node2->next)
	{
		continue;
	}
	node2->next = n;
	return (n);
}
