#include "lists.h"
/**
 *free_dlistint - Frees list contents
 *@head: Head pointer
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}
