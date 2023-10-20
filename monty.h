#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define  _POSIX_C_SOURCE 200809L

/**
 * struct stack_s - doubly linked list.
 * @n: integer
 * @prev: Pointer that points to the previous element.
 * @next: pointer to the next element.
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: The argument value
 * @file: pointer to the file monty.
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - The opcode function.
 * @opcode: pcode
 * @f: function for the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void for_push(stack_t **head, unsigned int number);
void for_pall(stack_t **head, unsigned int number);
void for_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stk(stack_t *head);
void for_pop(stack_t **head, unsigned int counter);
void for_swap(stack_t **head, unsigned int counter);
void for_add(stack_t **head, unsigned int counter);
void for_nop(stack_t **head, unsigned int counter);
void for_sub(stack_t **head, unsigned int counter);
void for_div(stack_t **head, unsigned int counter);
void for_mul(stack_t **head, unsigned int counter);
void for_mod(stack_t **head, unsigned int counter);
void for_pchar(stack_t **head, unsigned int counter);
void for_pstr(stack_t **head, unsigned int counter);
void for_rotl(stack_t **head, unsigned int counter);
void for_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void queue_add(stack_t **head, int n);
void for_queue(stack_t **head, unsigned int counter);
void for_stack(stack_t **head, unsigned int counter);
#endif
