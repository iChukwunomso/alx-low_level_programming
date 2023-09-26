#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index
 *
 * @head: pointer to first element in the linked list
 *
 * @index: index of the node to return
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
