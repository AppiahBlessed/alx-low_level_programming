#include "lists.h"
/**
 *get_dnodeint_at_index - Gets node at index
 *@head: Head pointer
 *@index: Index at which to get node
 *Return: Returns the address of that particular node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
