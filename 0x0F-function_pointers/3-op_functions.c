#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int (*get_op_func(char *s))(int, int);
/**
* op_add - adds 2 numbers
* @a: first sumand
* @b: second sumand
* Return: added num
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - substracts 2 numbers
* @a: first num
* @b: second num
* Return: subtracted num
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - multiplies 2 numbers
* @a: first multiplicand
* @b: second multiplicand
* Return: multiplied num
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a num
 * @a: first dividend
 * @b: second dividend
 * Return: divided num
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - modulo of num
* @a: num
* @b: modulo number
* Return: reminder
*/
int op_mod(int a, int b)
{
	return (a % b);
}

