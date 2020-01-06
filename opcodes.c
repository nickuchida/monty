#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	printf("print push\n");
}

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	printf("print pall\n");
	while (*stack)
	{
		stack.n = *stack;
		printf("%d\n", *stack->n);
		stack = *stack->next;
	}
}

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
