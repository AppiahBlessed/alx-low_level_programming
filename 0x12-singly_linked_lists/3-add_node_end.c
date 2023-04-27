#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - Add node to end of list
 *@head: Pointer to pointer
 *@str: String character
 *Return: Returns pointer to added node
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *addedNode;/*Initialize node*/

	addedNode = malloc(sizeof(list_t));/*Assign memory*/
	if (addedNode == NULL)
	{
		return (NULL);
	}
	addedNode->str = strdup(str);/*Copy str contents*/
	if (addedNode->str == NULL)
	{
		free(addedNode);/*Free memory*/
		return (NULL);
	}
	addedNode->next = NULL;/*Assign to make node hold null as pointer*/
	addedNode->len = strlen(str);
	if (*head == NULL)/*if no node is created set head to new node*/
	{
		*head = addedNode;
		return (addedNode);
	}

	temp = *head;
	/*Lets traverse*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = addedNode;

	return (addedNode);
}
