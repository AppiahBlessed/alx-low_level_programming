#include "lists.h"
/**
 *sum_listint - Sums items in each node
 *@head: Hold pointer to first node
 *Return: Returns sum of items
 *
 *
 *
 */
int sum_listint(listint_t *head)
{
	int num = 0;/*Number to add*/

	if (head == NULL)
	{
		return (0);
	}
	/*Lets traverse*/
	while (head != NULL)
	{
		num += head->n;/*Adding the members*/
		head = head->next;
	}
	return (num);
}
