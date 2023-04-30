#include "lists.h"
/**
 *reverse_listint - Reverses list items
 *@head: Pointer pointer to head
 *Return: Returns pointer to newly reversed first node
 *
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *back, *forward;

	current = *head;/*Hold first node*/
	back = NULL;
	forward = NULL;

	while (current != NULL)/*Set condition*/
	{
		forward = current->next;/*Hold following node after head*/
		current->next = back;/*Point to previous node*/
		back = current;
		current = forward;
	}
	*head = back;
	return (*head);
}
