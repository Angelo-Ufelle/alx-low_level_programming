#include "main.h"

/**
 * _strcmp - entry
 * @s1: 1st char
 * @s2: 2nd char
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
	b++;
	}
	return (0);
}
