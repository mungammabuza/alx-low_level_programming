#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list
 * @head: ptr to list that must be freed
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
	}
	free(head);
}
