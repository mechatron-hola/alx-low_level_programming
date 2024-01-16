#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: output value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
