#include "main.h"

/**
 * flip_bits - returns the number of bits you'd need to flip to get from n to m
 * @n: first num
 * @m: second num
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bits;
	unsigned long int xor;

	bits = 0;
	xor = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (xor >> i & 1)
			bits++;
	}
	return (bits);
}
