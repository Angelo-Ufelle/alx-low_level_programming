#include <stdio.h>
/**
 * main - entry
 * Return: 0 success
 */
int main(void)
{
	int no;
	char b;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
