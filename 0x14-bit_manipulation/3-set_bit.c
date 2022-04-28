#include "main.h"

/**
 * set_bit - this sets the value of a bit to 1.
 * at a given index.
 * @n: this is pointer of an unsigned long int.
 * @index: this is the index of the bit.
 *
 * Return: returns 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
		return (-1);

	w = 1 << index;
	*n = (*n | w);

	return (1);
}
