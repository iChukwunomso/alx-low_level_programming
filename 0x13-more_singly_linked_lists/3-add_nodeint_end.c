#include "lists.h"

/**
 * add_nodeint_end - this adds a node to the end of a linked list
 *
 * @head: pointer to the head of the list
 *
 * @n: data to insert in new list
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnode;

	return (newnode);
}

