#include "main.h"

/**
 * flip_bits - this returns the number of bits 
 * you would
 * need to flip to move from one number to another
 * @n: this is number one.
 * @m: this is number two.
 *
 * Return: returns the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
	}

	return (n_bits);
}
