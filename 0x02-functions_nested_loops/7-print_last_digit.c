#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer number
 * @n: The number that we are going to substract its first number
 *
 * Return: The last number of the number
 */
int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
		n = -n;
	lastd = n % 10;
	if (lastd < 0)
		lastd = -lastd;
	_putchar('0' + lastd);
	return (lastd);
}
