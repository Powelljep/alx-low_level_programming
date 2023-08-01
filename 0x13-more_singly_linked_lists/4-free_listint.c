#include <stdlib.h>
#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p = head, *temp;

	while (p->next != NULL)
	{
		temp = p->next;
		free(p);
		p = temp;
	}
	free(p);
}
