#include "monty.h"
/**
 * for_div - Function that divides top two elements of the stack.
 * @head: Head of the stack.
 * @counter: Line_number
 * Return: Nothing.
*/
void for_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int str_len = 0;
	int tmp;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (str_len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	tmp = h->next->n / h->n;
	h->next->n = tmp;
	*head = h->next;
	free(h);
}
