#include <stdio.h>
/**
 * main - entry
 * Return: 0 success
 */
int main(void)
{
	int num;

	for (num = 10; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
