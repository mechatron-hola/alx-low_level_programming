#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to concat into
 * @src: string to concat from
 * @n: number of characters to concat from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
