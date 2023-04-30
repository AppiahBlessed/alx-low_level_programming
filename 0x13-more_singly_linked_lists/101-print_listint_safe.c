#include "lists.h"
/**
 *print_listint_safe - Prints linked list
 *@head: Points to first node
 *Return: Returns number of nodes in the list
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
