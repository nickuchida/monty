#include "monty.h"

/**
 *push - push element to stack
 *@stack: stack
 *@line_number: line number
 *Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	printf("print push\n");
}

/**
 *pall - print all
 *@stack: the stack
 *@line_number: line number
 *Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
/*
 *	printf("print pall\n");
 *	while (*stack)
 *	{
 *		(*stack) = (*stack)->n;
 *		printf("%d\n", (*stack)->n);
 *		(*stack) = (*stack)->next;
 *	}
*/
}

/**
 *nop - no purpose
 *@stack: void
 *@line_number: void
 *Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
