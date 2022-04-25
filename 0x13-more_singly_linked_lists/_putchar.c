#include <unistd.h>

/**
 * _putchar - this writes character c to stdout
 * @c: The character to print
 *
 * Return: 1 if successful.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
