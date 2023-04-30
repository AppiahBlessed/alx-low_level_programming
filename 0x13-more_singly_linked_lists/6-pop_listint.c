#include "lists.h"
/**
 *pop_listint - Deletes first node
 *@head: Pointer to the head node
 *Return: returns the data held by the head node
 *
 *
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)/*Handle if lkist is empty*/
	{
		return (0);
	}
	num = (*head)->n;/*Store the value of the head node*/
	temp = *head;/*Holds pointer to head*/
	*head = (*head)->next;/*Becomes next node*/
	free(temp);
	return (num);/*Return the number held by head node*/
}
