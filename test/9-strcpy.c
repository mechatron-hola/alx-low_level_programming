#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: address of string to copy to
 * @src: address of string to copy from
 * Return: adress of copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}

	dest[i] = '\0';

	return (dest);
}
