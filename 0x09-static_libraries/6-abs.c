#include "main.h"

/**
 * _abs - Prints the absolute value of an integer number
 * @n: number to be checked
 *
 * Return: n if the number is positive, -n otherwise
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
