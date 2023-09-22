#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of linked list
 * @head: double pointer to the list_t list
 * @str: new string
 * Return: address of new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = (*head);
	(*head) = newnode;
	return (*head);
}
