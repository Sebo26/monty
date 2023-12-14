#include "monty.h"
#include <stdio.h>
/**
 * push - the function adds element to top of stack
 * @n: the element that will be added.
 */
void push(int n)
{
stack_t *newNode;
newNode = malloc(sizeof(stack_t));
if (newNode == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
newNode->n = n;
newNode->prev = NULL;
newNode->next = stack_s;
if (stack_s != NULL)
{
	(stack_s)->prev = newNode;
}
stack_s = newNode;
}
