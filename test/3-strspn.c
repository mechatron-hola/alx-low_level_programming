#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to check
 * Return: number of bytes in the initial segment of s
 * which consist of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int res = 0, len = 0, i, j, lena, k, l;

	k = 0;
	while (s[k] != ' ')
	{
		len++;
		k++;
	}
	lena = 0;
	l = 0;
	while (accept[l] != '\0')
	{
		lena++;
		l++;
	}
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= lena; j++)
		{
			if (accept[j] == s[i])
			{
				res++;
			}
		}
	}
	return (res);
}
