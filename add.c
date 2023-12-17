#include "monty.h"

/**
 * add - The function adds the top two elements of the stack.
 * @stack: pointer to the stack.
 * @line_number: line number where the add operation is called.
 */
void add(stack_t **stack)
{
static unsigned int line_number = 1;
stack_t *first = *stack;
stack_t *second = first->next;
if (*stack == NULL || (*stack)->next == NULL)
{
	line_number++;
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
else
{
	first->next = second->next;
	first->n += second->n;
	free(second);
	*stack = first;
}
}
