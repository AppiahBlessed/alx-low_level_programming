#include "lists.h"
/**
 *get_nodeint_at_index - Gets node at index
 *@head: Holds head node
 *@index: Number of times loop should run to get nth node
 *Return: Returns pointer to current nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;/*initially holds head*/
	for (i = 0; i < index && temp != NULL; i++)/*Traverse to a given stop*/
	{
		temp = temp->next;
	}
	if (i == index && temp != NULL)/*Checks if nth index exkist*/
	{
		return (temp);
	}
		else
		{
			return (NULL);
		}
}
