#include "lists.h"
/**
 *sum_dlistint - Sums integer elements of list
 *@head: Head pointer
 *Return: Returns the final sum
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		result = result + temp->n;
		temp = temp->next;
	}
	return (result);
}
