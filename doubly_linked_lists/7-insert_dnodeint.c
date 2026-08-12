#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
