#include "lists.h"
/**
 *listint_t *add_nodeint_end - Adds node to end of list
 *@head: Head pointer to pointer
 *@n: N int element in node
 *Return: Returns pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *addedNode;/*New node declare*/

	addedNode = malloc(sizeof(listint_t));/*Give him memory*/
	if (addedNode == NULL)/*Just incase something goes wrong*/
	{
		return (NULL);
	}
	if (*head == NULL)/*Assigns head pointer to adress of new node*/
	{/*If head has nothin to point to*/
		*head = addedNode;
	}
	temp = *head;/*Temporarily hold pointer*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = addedNode;/*Previos last node to point to new end node*/
	addedNode->n = n;
	addedNode->next = NULL;
	return (addedNode);
}
