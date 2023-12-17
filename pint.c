#include "monty.h"
#include <stdio.h>

/**
 * pint - The function prints the value at the top of the stack and newline.
 * @stack: double pointer to the top of the stack
 * Return: 0 (Success)
 */
int pint(stack_t **stack)
{
static unsigned int line_number = 1;
if (isEmpty(*stack))
{
	line_number++;;
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
else
{
printf("%d\n", (*stack)->n);
line_number++;
return (0);
}
}
