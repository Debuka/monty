#include "monty.h"
/**
 * addnode_funct - This function adds node to the head stack.
 * @head: The head of the stack.
 * @n: new_value
 * Return: Nothing
*/
void addnode_funct(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
