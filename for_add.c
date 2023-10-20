#include "monty.h"
/**
 * f_add - For addition of the top two elements of the stack.
 * @head: Head of the stack.
 * @counter: The line_number.
 * Return: Nothing.
*/
void for_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int str_len = 0, tmp;

	h = *head;
	while (h)
	{
		h = h->next;
		str_len++;
	}
	if (str_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->n + h->next->n;
	h->next->n = tmp;
	*head = h->next;
	free(h);
}
