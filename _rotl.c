#include "monty.h"
/**
  * for_rotl- Function that rotates the stack.
  * @head: pointer to the head of the stack.
  * @counter: line_number.
  * Return: Nothing.
 */

void for_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *hd = *head, *tmp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	tmp = (*head)->next;
	tmp->prev = NULL;
	while (hd->next != NULL)
	{
		hd = hd->next;
	}
	hd->next = *head;
	(*head)->next = NULL;
	(*head)->prev = hd;
	(*head) = tmp;
}
