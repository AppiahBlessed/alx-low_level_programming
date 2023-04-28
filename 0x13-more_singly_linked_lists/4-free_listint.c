#include "lists.h"
/**
 *free_listint - Frees nodes memory
 *@head: Points to first node
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *mover, *temp;

	mover = head;
	while (mover != NULL)
	{
		temp = mover;
		mover = mover->next;
		free(temp);
	}

}
