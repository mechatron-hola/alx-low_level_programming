#include "main.h"
/**
 * _memset - fills memory with a specific byte
 * @s: pointer to memory area
 * @b: the original value
 * @n: number of bytes in s to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
