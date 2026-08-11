#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a given index
 * @head: pointer to the head
 * @index: index of the node
 *
 * Return: node, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h;

	h = head;

	while (h != NULL)
	{
		if (i == index)
			return (h);

		h = h->next;
		i++;
	}

	return (NULL);
}
