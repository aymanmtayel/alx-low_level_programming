#include "3-calc.h"

/**
 * get_op_func - apply the required operator
 * @s: operator provided
 *
 * Return: function pointer.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t operand[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (i < 5)
	{
		if (operand[i].op[0] == s[0])
			return (operand[i].f);
		i++;
	}
	return (NULL);
}
