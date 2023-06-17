#include "lists.h"
/**
 *insert_dnodeint_at_index - Inserts a new node at index
 *@h: Head pointer
 *@idx: Index
 *@n: Integer from struct
 *Return: Returns newnode's address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0;

	temp = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);/*Called from file 2*/
	}
	while (temp != NULL && i < idx -1)/*Fall at exact index*/
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)/*When impossible to insert at position*/
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = newnode;
	}
	temp->next = newnode;
	return (newnode);
}
