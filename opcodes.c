#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	printf("print push\n");
}

void pall(stack_t **stack, unsigned int line_number)
{
	printf("print pall\n");
	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
