#include "monty.h"
#include <stdio.h>

/**
 * pall - the function prints items of stack.
 * @stack: double pointer to the stack.
 */
void pall()
{
stack_t *temp;
if ((stack) == NULL)
{
	fprintf(stderr, "Stack underflow\n");
	exit(EXIT_FAILURE);
}
else
{
	temp = stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
}
