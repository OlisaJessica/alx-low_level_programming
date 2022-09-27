#include "main.h"

/**
 * function -fill the memory witha a constant byte
 *@s: address to memory block
 *@b: charto be used
 *@n: number of bytes to be used
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
