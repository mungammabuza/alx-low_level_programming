#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at beginning of list
 * @head: beginning of list
 * @str: new node to be added
 *
 * Return: address of new element on success, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	size_t len;
	int n;

	i = malloc(sizeof(list_t));

	if (i == NULL)
		return (NULL);

	for (n = 0, len = 0; str[n] != '\0'; n++)
		len++;

	i->str = strdup(str);
	i->len = len;

	i->next = *head;
	(*head) = i;
	return (i);
}
