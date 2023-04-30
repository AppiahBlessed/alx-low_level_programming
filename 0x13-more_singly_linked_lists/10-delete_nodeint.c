#include "lists.h"
/**
 *delete_nodeint_at_index - Deletes node at index
 *@head: Pointer to pointer of head
 *@index: Determines index to delete at
 *Return: Returns 1 on success and 2 on failure
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current, *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;/*Hold head node temporarily*/
		*head = (*head)->next;/*Replace head with the next address*/
		free(temp);/*Free the  temp node*/
		return (1);/*On success*/
	}
	current = *head;
	prev = NULL;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)/*When end of lkist is reached*/
		{
			return (-1);
		}
		prev = current;
		current = current->next;
	}
	prev->next = current->next;/*Before node to next of after delete node*/
	free(current);/*Freeeeeeeee*/
	return (1);

}
