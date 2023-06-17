#include "lists.h"
/**
 *add_dnodeint_end - Adds element to the end of the list
 *@head: Head pointer
 *@n: Integer element defined in the struct
 *Return: Returns the address to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));/*When malloc fails*/
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)/*If the list is empty*/
	{
		*head = newnode;
	}
	else
	{
		temp = *head;/*Traverse!!!*/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;

	}
	return (newnode);
}
