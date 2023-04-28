#include "lists.h"
/**
 *print_listint - Prints items in nodes
 *@h: Header 
 *Return: Returns count as the number of elkemnts
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n",h->n);
		h = h->next;
		count++;
	}
	return (count);
}
