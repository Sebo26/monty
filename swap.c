#include "monty.h"

/**
 * swap - The function swaps the top two elements of the stack.
 * @stack: pointer to the stack.
 */
void swap(stack_t **stack)
{
stack_t *first = *stack;
stack_t *second = first->next;
unsigned int line_number = 0;
if (*stack == NULL || (*stack)->next == NULL)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

first->next = second->next;
second->next = first;
*stack = second;
line_number++;
}
