#include "main.h"

/**
 * reverse_array - entry
 * @a: elements
 * @n: no of elements
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
