#include "lists.h"
#include <stdio.h>
/**
 *print_list - Print list in a linked list
 *@h: of type list_t kis the head pointer
 *Return: Returns the number of nodes in total
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{/*Initialize list count to 0 to count the number of times condition == True*/
	int list = 0;
	/*Set a condition where last element is encountered*/
	while (h != NULL)
	{	/*Print that if NULL is passed as str data*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
			else	/*Prints lenght of list and content of str*/
				printf("[%u] %s\n", h->len, h->str);
		list++;/*Count loops*/
		h = h->next;/*Asskign the old pointer to next pointer*/
	}

	return (list);
}
