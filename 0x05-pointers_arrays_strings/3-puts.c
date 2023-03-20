#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: a string to be printed
 * Return: noting
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
