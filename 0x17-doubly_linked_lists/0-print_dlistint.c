#include "lists.h"
/**
 *print_dlistint - Prints list content
 *@h: Head pointer
 *Return: Returns zero
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;/*Temporarily store head node address*/
	int count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;/*To travers*/
		count++;
	}
	return (count);
}
