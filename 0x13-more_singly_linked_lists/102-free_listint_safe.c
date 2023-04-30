#include "lists.h"
/**
 *free_listint_safe - Free memory
 *@h: Header pointer
 *Return: Returns len
 *
 *
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int count;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		count = *h - (*h)->next;
		if (count > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
