#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: decimal number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((*n) >> index & 1)
		*n -= _pow_recursion(2, index);
	return (1);
}
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base
 * @y: exponent
 *
 * Return: result of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
