#include "monty.h"
/**
* execute_funct - Function that executes the opcode.
* @stack: The head of the linked list
* @counter: line_counter
* @file: pointer to monty file.
* @content: line content
* Return: Nothing.
*/
int execute_funct(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", for_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", for_pop},
				{"swap", for_swap},
				{"add", for_add},
				{"nop", for_nop},
				{"sub", for_sub},
				{"div", for_div},
				{"mul", for_mul},
				{"mod", for_mod},
				{"pchar", for_pchar},
				{"pstr", for_pstr},
				{"rotl", for_rotl},
				{"rotr", for_rotr},
				{"queue", for_queue},
				{"stack", for_stack},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *j;

	j = strtok(content, " \n\t");
	if (j && j[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && j)
	{
		if (strcmp(j, opst[k].opcode) == 0)
		{	opst[k].f(stack, counter);
			return (0);
		}
		k++;
	}
	if (j && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, j);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
