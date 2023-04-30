#include "lists.h"
/**
 *insert_nodeint_at_index - Insert new node at idx
 *Return: Returns pointer to new node
 *@head: Pointer to pointer
 *@idx: Index 
 *@n: Item member of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *current, *addedNode;/*Declare new node*/
	unsigned int i;

	if (head == NULL)/*Check if list is empty*/
	{
		return (NULL);
	}
	if ( idx == 0)/*If we want to insert at the beginning of list*/
	{
		addedNode = malloc(sizeof(listint_t));
		if (addedNode == NULL)
		{
			return (NULL);
		}
		addedNode->next = *head;/*Dereference to point to current head*/
		addedNode->n = n;
		*head = addedNode;/*Point pointer to new node*/
		return (addedNode);
	}
	prev = NULL;
	current = *head;
	for (i = 0; i < idx && current != NULL; i++)/*Lets Traverse*/
	{
		prev = current;/*To shift all elements in thier new places*/
		current = current->next;
	}
	if (i == idx)/*When index is reached*/
	{
		addedNode = malloc(sizeof(listint_t));/*Asskign memory*/
		if (addedNode == NULL)
		{
			return (NULL);
		}
		addedNode->n = n;/*Give new node element*/
		addedNode ->next = current;
		prev->next = addedNode;
	}
		else
		{
			return (NULL);
		}
	return (addedNode);
}
