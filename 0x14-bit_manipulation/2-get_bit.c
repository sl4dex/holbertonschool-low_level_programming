#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: decimal number
 * @index: index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; n >> i != 0; i++)
	{
	}
	if (index > 63)
		return (-1);
	if (n >> index & 1)
		return (1);
	else
		return (0);
}
