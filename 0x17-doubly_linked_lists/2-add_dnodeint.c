#include "lists.h"
/**
 *add_dnodeint - Adds a new node
 *@head: The pointer to the head pointer
 *@n: The integer value data defined in the struct
 *Return:Returns an address of the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));/*If malloc fails*/
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;
	if (*head != NULL)/*Dont run when list is empty*/
	{
		(*head)->prev = newnode;
	}
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
