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
	dlistint_t *newnode, *temp, *next_node;
	unsigned int i = 1;

	temp = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		add_dnodeint(h, n);/*Called from file 2*/
	}
	else
	{
		newnode->n = n;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		next_node = temp->next;
		newnode->prev = temp;
		newnode->next = next_node;
		temp->next = newnode;
	}
	return (newnode);
}
