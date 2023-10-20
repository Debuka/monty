#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second top elemen
 * of the stack by the top element of the stack.
 *
 * @head: A pointer pointing to th stack head.
 * @counter: line_number.
 *
 * Return: Nothing.
*/
void for_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = h->next->n % h->n;
	h->next->n = tmp;
	*head = h->next;
	free(h);
}
