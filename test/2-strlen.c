#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
 */

int _strlen(char *s)
{
	int lengt = 0;

	while (s[lengt] != '\0')
		lengt++;

	return (lengt);
}



