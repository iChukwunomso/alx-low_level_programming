#include "lists.h"

/**
 * reverse_listint - this reverses a singly linked list
 *
 * @head: pointer to the head
 *
 * Return: pointer to the first node in the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}

	*head = prv;

	return (*head);
}
