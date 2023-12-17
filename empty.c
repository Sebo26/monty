#include "monty.h"

/**
 * isEmpty - The function checks if a stack is empty
 * Return: 1(if empty) 0(not empty)
 */
int isEmpty()
{
	if(top == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
