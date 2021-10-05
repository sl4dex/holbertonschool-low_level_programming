#include "main.h"

/**
 * print_sign - Checks wether a number is positive, negative, or 0
 * @n: number to be checked
 *
 * Return: +, 1 if the number is positive
 * -, -1 if the number is negative
 * 0, 0 if the number is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (n);
	}
}
