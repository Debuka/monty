#include "monty.h"
/**
 * for_pall - Function that prints the stack.
 * @head: Head of the tack.
 * @counter: itirator.
 *
 * Return: Nothing.
*/
void for_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
