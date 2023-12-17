#include "monty.h"
#include "push.c"
#include "pall.c"

/**
 * main - Function.
 * Return: 0(Success)
 */
int main(void)
{
	push(1);
	pall();
	isEmpty(stack);
	pint(&stack);
	return (0);
}
