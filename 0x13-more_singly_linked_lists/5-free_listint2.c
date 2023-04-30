#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;

}
