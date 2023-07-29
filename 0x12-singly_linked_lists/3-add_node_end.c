#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head  of the linked list
 * @str: string to add to the node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t)), *p = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	while (p != NULL)
	{
		p = p->next;
	}
	if (p->next == NULL)
	{
		p->next = newnode;
	}
	return (newnode);
}
