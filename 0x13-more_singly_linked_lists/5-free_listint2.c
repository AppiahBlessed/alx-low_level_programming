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
	listint_t *temp = *head;/*Pointer to the current node*/
	listint_t *next;/* Pointer to the next node*/
	
	if (head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		next = temp->next;/*Store a pointer to the next node*/
		free(temp);/*free current node*/
		temp = next;/*Enter next node*/
	}
	*head = NULL;/*Set the original pointer to NULL*/

}
