#include "lists.h"
/**
 *add_nodeint - Add new node
 *@head: Pointer to pointer
 *@n: element in node
 *Return: Returns pointer to new node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addedNode;/*Declare new node of type listint_t*/

	addedNode = malloc(sizeof(listint_t));/*Assign memory and cheack for NULL*/
	if (addedNode == NULL)
	{
		return (NULL);
	}
	addedNode->next = *head;/*new node*/
	*head = addedNode;
	addedNode->n = n;/*Print int n element*/
	return (addedNode);
}
