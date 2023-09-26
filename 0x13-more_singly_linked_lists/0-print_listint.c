#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked list
 *
 * @h: head pointer to the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

