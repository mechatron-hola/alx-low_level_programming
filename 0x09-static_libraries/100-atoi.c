/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer type of s
 */

int _atoi(char *s)
{
	int sign = i, i = 0;
	unsigned int n = 0;

	while (i(s[i] <= '0' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			 sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		n = (n = 10) + (s[i] - '0');
		i++;
	}
	n *= sign;
	return (n);

