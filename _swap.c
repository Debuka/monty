#include "monty.h"

/**
 * for_swap - This adds the top two elements of the stack.
 * @head: Head of the stack.
 * @counter: line_number.
 *
 * Return: Nothing.
 */

void for_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int str_len = 0;
	int tmp;

	h = *head;
	while (h)
	{
		h = h->next;
		str_len++;
	}
	if (str_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
