#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: list to be freed
 *
 * Return: returns nothing
 */
void free_list(list_t *head)
{
	list_t *p = head, * team = p->next;

	while(p->next != NULL)
	{
		
	}
}
