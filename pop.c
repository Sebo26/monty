#include "monty.h"

/**
 * pop - the function removes the top element of the stack.
 * @stack: double pointer to the top of the stack
 * Return: value that will be deleted.
 */
int pop(stack_t **stack)
{
	int n;
	static unsigned int line_number = 1;
	stack_t *temp = *stack;
	if(isEmpty(*stack))
	{
		fprintf(stderr, "L%d: can't pop, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = (*stack)->n;

	*stack = (*stack)->next;
	free(temp);
	temp = NULL;
	line_number++;
	return n;
}
