#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds the length of a list
 * @h: pointer to head node
 * Return: length of node
 */

size_t list_len(const list_t *h)
{
	size_t nds;

	nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}
	return (nds);
}
