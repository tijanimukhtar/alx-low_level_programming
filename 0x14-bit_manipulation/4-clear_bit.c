#include "main.h"

/**
 * clear_bit - this sets the value of a bit to 0.
 * at a given index.
 * @n: this is the pointer of an unsigned long int.
 * @index: this is the index of the bit.
 *
 * Return: returns 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
		return (-1);

	w = 1 << index;

	if (*n & w)
		*n ^= w;

	return (1);
}
