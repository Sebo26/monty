#include "monty.h"
#include <stdio.h>

#ifndef PALL_C
#define PALL_C
/**
 * pall - the function prints items of stack.
 * @stack: double pointer to the stack.
 */
void pall()
{
static stack_t *stack = NULL;
stack_t *temp = stack;
if (temp == NULL)
{
	fprintf(stderr, "Stack underflow\n");
	exit(EXIT_FAILURE);
}
else
{
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
}
#endif
