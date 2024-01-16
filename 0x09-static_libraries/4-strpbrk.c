/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: token to search for
 * Return: pointer to byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	s++;
	}

	return ('\0');
}
