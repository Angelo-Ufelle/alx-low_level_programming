#include "main.h"

/**
 * _puts - entry
 * @str: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
