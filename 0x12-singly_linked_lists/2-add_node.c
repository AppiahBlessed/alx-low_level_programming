#include "lists.h"
#include <string.h>
/**
 *add_node - Create new node
 *@head: Pointer to pointer on head
 *@str: String character arguement
 *Return: Returns pointer to new node
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addedNode;/*Declare new node*/

	addedNode = malloc(sizeof(list_t));/*Make space for new node*/
	if (addedNode == NULL)/*Returns NULL upon failure*/
	{
		return (NULL);
	}
	addedNode->str = strdup(str);/*Create a duplicate of str into addedNode.str*/
	addedNode->len = strlen(str);/*pass lenght of string*/
	if (addedNode->str == NULL)/*Check for NULL and free memory*/
	{
		free(addedNode);
		return (NULL);
	}
	addedNode->next = *head;/*Make new node the hold same adress as head*/
	*head = addedNode;/*Update head pointer*/
	return (addedNode);/*Returns pointer to new node*/

}
