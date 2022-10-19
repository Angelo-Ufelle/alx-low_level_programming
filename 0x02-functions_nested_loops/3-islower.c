#include "main.h"

/**
 * _islower - entry point
 * @c: character
 * Return: 1 lowercase, 0 not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
