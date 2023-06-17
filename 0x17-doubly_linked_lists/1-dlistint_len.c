#include "lists.h"
/**
 *dlistint_len - Checks for the lenght of list
 *@h: Head pointer
 *Return: Returns the lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
