#include "lists.h"
/**
 *list_len - Gets lenght of lists
 *@h: Pointer as head
 *Return: Returns number
 *
 */
size_t list_len(const list_t *h)
{
	int num = 1;/*I really dont know why i initialized with 1*/
	int i;

	for (i = 0; h->next != NULL; i++)/*Loop through element till conditon == F*/
	{
		num++;
		h = h->next;
	}
	return (num);
}
