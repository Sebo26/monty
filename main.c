#include "monty.h"

/**
 * main - Function.
 * Return: 0(Success)
 */
int main(void)
{
int popped_value;
stack_t *stack = NULL;

push(1);
push(2);
push(3);

printf("Printing stack:\n");
pall();

pint(&stack);

popped_value = pop(&stack);
printf("Popped value: %d\n", popped_value);

swap(&stack);

add(&stack);

printf("Printing stack after modifications:\n");
pall();
return (0);
}
