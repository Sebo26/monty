#include "monty.h"
#include <stdio.h>

#ifndef PUSH_C
#define PUSH_C
/**
 * push - the function adds element to top of stack
 * * @n: the element that will be added.
 */
void push(int n)
{
static stack_t *stack = NULL;
stack_t *newNode;
newNode = malloc(sizeof(stack_t));
if (newNode == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
newNode->n = n;
newNode->prev = NULL;
newNode->next = stack;
if (stack != NULL)
{
	stack->prev = newNode;
}
stack = newNode;
}
#endif
