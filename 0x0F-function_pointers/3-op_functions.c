#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int (*get_op_func(char *s))(int, int);
/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
	/* alias for struct op */
} op_t;
/**
* . -
* @
*
* Return: .
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* . -
* @
*
* Return: .
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* . -
* @
*
* Return: .
*/
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit (100);
	}
	return (a/b);
}
/**
* op_mod -
* @a:
* @b:
* Return: a % b
*/
int op_mod(int a, int b)
{
	return (a % b);
}

