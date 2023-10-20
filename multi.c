#include "monty.h"

/**
 * for_mul - Function that multiplies
 * the top two elements of the stack.
 *
 * @head: Stack head.
 * @counter: Line_number.
 *
 * Return: Nothing.
*/
void for_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->next->n * h->n;
	h->next->n = tmp;
	*head = h->next;
	free(h);
}
