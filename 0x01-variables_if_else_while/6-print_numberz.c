#include <stdio.h>
/**
 * main ' entry
 * Return: 0 success
 */
int main(void)
{
	int n;

	for (n = 10; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
