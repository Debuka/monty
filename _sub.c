#include "monty.h"

/**
  * for_sub- sustration
  * @head: stack head
  * @counter: line_number
  * Return: no return
  */

void for_sub(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	int sus, nodes;
	
	tmp = *head;
	for (nodes = 0; tmp != NULL; nodes++)
		tmp = tmp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	i = tmp->next->n - tmp->n;
	aux->next->n = i;
	*head = tmp->next;
	free(tmp);
}
