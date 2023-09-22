#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to end of list
 * @head: head of node
 * @str: string
 * Return: address of the new element, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newnode;
	return (*head);
}
