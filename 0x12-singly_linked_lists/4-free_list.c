#include <stdlib.h>
#include "lists.h"
/**
 *free_list - Frees memory
 *@head: Hold the start of the list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;/*Temporary staorage of head*/

	while (head != NULL)/*Lets travers*/
	{
		temp = head;/**Assignhead pointer to temp**/
		head = head->next;

		free(temp->str);/*Free str when we used strdup*/
		free(temp);

	}
}
