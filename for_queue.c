#include "monty.h"
/**
 * for_queue - Function that prints the top of the list.
 * @head: Head of the stack.
 * @counter: line_number
 * Return: Nothing.
*/
void for_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * queue_add - Function that add a node to the tail stack.
 * @n: new_value
 * @head: head of the stack
 * Return: Nothing.
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *tmp;

	tpm = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}
