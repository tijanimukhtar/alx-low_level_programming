#include "main.h"

/**
 * binary_to_uint - this converts a binary 
 * number to an
 * unsigned int.
 * @b: this is binary.
 *
 * Return: returns unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len_, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len_ = 0; b[len_] != '\0'; len_++)
		;

	for (len_--, base_two = 1; len_ >= 0; len_--, base_two *= 2)
	{
		if (b[len_] != '0' && b[len_] != '1')
		{
			return (0);
		}

		if (b[len_] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
