#include "main.h"

/**
 * flip_bits - returns num of bits needed
 * to flip to go to one num from another
 * @n: number one.
 * @m: number two.
 *
 * Return: num of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
