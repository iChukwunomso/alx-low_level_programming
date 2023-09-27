#include "lists.h"

/**
 * free_listint_safe - this frees a linked list
 *
 * @h: pointer to the head
 *
 * Return: this number of freed elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int rizz;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		rizz = *h - (*h)->next;
		if (rizz > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
