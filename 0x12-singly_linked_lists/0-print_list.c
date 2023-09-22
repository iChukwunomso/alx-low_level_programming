#include <stdio.h>
#include "lists.h"
/**
 * print_list - This prints all element of the linked list
 * @h: The singly linked lists
 * Return: Number of nodes thats printed
 */


size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
