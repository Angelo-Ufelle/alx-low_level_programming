#include "main.h"

/**
 * swap_int - entry
 * @a: first variable
 * @b: 2nd variable
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
