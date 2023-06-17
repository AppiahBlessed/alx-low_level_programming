#include "lists.h"
/**
 *delete_dnodeint_at_index - Deletes node at index
 *@head: Head pointer
 *@index: Index to delete at
 *Return: Returns 1 or -1 for success or otherwise respectively
 */
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
