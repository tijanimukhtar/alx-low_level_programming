#include "main.h"

/**
 * get_endianness - this will check the endianness
 *
 * Return: returns 0 if big endian, 
 * 1 if little endian
 */
int get_endianness(void)
{
	unsigned int w;
	char *c;

	w = 1;
	c = (char *) &w;

	return ((int)*c);
}
