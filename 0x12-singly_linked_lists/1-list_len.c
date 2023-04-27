#include "lists.h"
/**
 *list_len - Gets lenght of lists
 *@h: Pointer as head
 *Return: Returns number
 *
 */
size_t list_len(const list_t *h)
{
	int num = 0;
	int i;

	if (h != NULL)
		for (i = 0; h != NULL; i++)/*Loop through element till conditon == F*/
		{
			num++;
			h = h->next;
		}
	return (num);
}
