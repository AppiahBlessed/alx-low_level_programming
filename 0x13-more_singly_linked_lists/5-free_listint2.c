#include "lists.h"
/**
 *free_listint2 - free memory
 *@head: Pointer to head
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;/*Store a pointer to the next node*/
		free(*head);/*free current node*/
		*head = temp;/*Enter next node*/
	}
	*head = NULL;/*Set the original pointer to NULL*/

}
