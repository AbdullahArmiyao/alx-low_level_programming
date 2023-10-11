#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to
 * perform the operation
 * @s: operator
 * Return: pointer to function that corresponds to the given operator
 */

int (*get_op_func(char *s))(int, int)
{
	/* counter */
	int i = 0;

	/* create a struct of operation structs */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* if no opertator, no function is called */
	};

	/* while we are not at the end of the struct array */
	while (ops[i].op)
	{
		/* if strcmp returns 0, it means ops[i].op and s were the same */
		/* if so, return the function for that operator */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
