#include "main.h"

/**
 * print_numbers - prints number 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
