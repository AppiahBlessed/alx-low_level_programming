#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
size_t list_len(const list_t *h)
{
	int num = 1;
	int i;

	for (i = 0; h->next != NULL; i++)
	{
		num++;
		h = h->next;
	}
	return(num);
}
