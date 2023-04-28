#include "lists.h"
/**
 *listint_len - Prints the number of elements
 *@h: Head pointer to first node
 *Return: Returns count as the number
 *
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
