#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == m)
	{
		return (0);
	}
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}

