#include "monty.h"

/**
 * for_push - Function that adds node to the stack
 * @head: Head of the stack.
 * @counter: line_number
 *
 * Return: Nothing.
 */

void f_push(stack_t **head, unsigned int counter)
{
	int m, k = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	m = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, m);
	else
		queue_add(head, m);
}
