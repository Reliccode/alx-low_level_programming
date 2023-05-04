#include "main.h"

/**
 * clear_bit - sets value of bit to 0.
 * at given index.
 * @n: pointer of unsigned long int.
 * @index: index of bit.
 *
 * Return: 1 if worked, -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
