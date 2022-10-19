#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0 success
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	putchar('\n');

	return (0);
}
