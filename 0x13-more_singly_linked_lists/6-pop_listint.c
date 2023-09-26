#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 *
 * @head: pointer to first element
 *
 * Return: the deleted data inside the element or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (count);
}
