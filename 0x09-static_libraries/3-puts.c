#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(str++);
	}

	_putchar('\n');
}
