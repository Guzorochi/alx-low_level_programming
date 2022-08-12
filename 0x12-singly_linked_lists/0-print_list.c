#include "lists.h"

/**
 * print_list - this prints all the elements in a linked list
 * @h: pointer to the list_t list to be displayed
 *
 * Return:  Return the number of nodes displayed
 */

size_t print_list(const list_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			nodes++;
			continue;
		}

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
