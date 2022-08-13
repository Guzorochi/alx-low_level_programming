#include "lists.h"

/**
 * list_len - number of elements in a list
 * @h: the list
 *
 * Return: The total number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
		h = h->next;

	return (nodes);
}
