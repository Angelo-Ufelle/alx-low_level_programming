#include "main.h"

/**
 * print_line - entry
 * @n: no of times char should be printed
 * Return: 0
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}

	_putchar('\n');
}
