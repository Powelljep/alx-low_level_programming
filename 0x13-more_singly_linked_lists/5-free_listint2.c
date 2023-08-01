#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to head node pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *temp;

	p = *head;
	*head = NULL;
	while (p != NULL)
	{
		temp = p->next;
		free(p);
		p = temp;
	}
}
