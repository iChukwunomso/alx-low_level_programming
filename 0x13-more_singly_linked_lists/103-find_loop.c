#include "lists.h"

/**
 * find_listint_loop - this finds the loop
 *
 * @head: the linked list to find
 *
 * Return: address of the node or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walk = head;
	listint_t *run = head;

	if (head == NULL)
		return (NULL);

	while (walk && run && run->next)
	{
		run = run->next->next;
		walk = walk->next;
		if (run == walk)
		{
			walk = head;
			while (walk != run)
			{
				walk = walk->next;
				run = run->next;
			}
			return (run);
		}
	}

	return (NULL);
}
