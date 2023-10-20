#include "monty.h"
/**
* free_stack - Function that frees a doubly linked list.
*
* @head: A pointer to head of the stack.
*/
void free_stk(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
