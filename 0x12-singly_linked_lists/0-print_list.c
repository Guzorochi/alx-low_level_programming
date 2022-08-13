#include "lists.h"

/**
 * print_list - this prints all the elements in a linked list
 * @h: pointer to the list_t list to be displayed
 *
 * Return:  Return the number of nodes displayed
 */

size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++, h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	}

	return (s);
}
