#include "monty.h"

/**
  * for_rotr- This code rotates the stack to bottom.
  * @head: Head of the stack.
  * @counter: line_number
  * Return: Nothing.
  */

void for_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
